#include <unistd.h>

void	increment(char *combo, int n);
void	increment_recursive(char *combo, int k, int i);
void	print_numbers(char *combo, int n);
void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	char	combo[9];
	int		i;

	i = 0;
	while (i < n)
	{
		combo[i] = (char) i + 48;
		i++;
	}
	print_numbers(combo, n);
	while (combo[0] <= '9' - n || combo[n - 1] < '9')
	{
		increment(combo, n);
		print_numbers(combo, n);
	}
}

void	increment(char *combo, int n)
{
	int	i;
	int	k;

	k = 0;
	i = n - 1;
	increment_recursive(combo, k, i);
}

void	increment_recursive(char *combo, int k, int i)
{
	if (combo[i - k] < '9' - k)
	{
		combo[i - k]++;
	}
	else
	{
		k++;
		if (k <= i)
		{
			increment_recursive(combo, k, i);
			combo[i - k + 1] = combo[i - k] + 1;
		}
	}
}

void	print_numbers(char *combo, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(combo[i]);
		i++;
	}
	if (combo[0] <= '9' - n && combo[n - 1] <= '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}