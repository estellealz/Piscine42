#include <unistd.h>

void	print_2digits(char *combo, int n);
void	ft_putchar(char c);
void	increment(char *combo);

void	ft_print_comb2(void)
{
	char	combo[2];

	combo[0] = 0;
	combo[1] = 1;
	while (combo[0] < 99)
	{
		print_2digits(combo, 0);
		ft_putchar(' ');
		print_2digits(combo, 1);
		if (combo[0] < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		increment(combo);
	}
}

void	print_2digits(char *combo, int n)
{
	char	ascii_offset;

	ascii_offset = 48;
	if (combo[n] < 10)
	{
		ft_putchar('0');
		ft_putchar(combo[n] + ascii_offset);
	}	
	else
	{
		ft_putchar(combo[n] / 10 + ascii_offset);
		ft_putchar(combo[n] % 10 + ascii_offset);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	increment(char *combo)
{
	combo[1]++;
	if (combo[1] > 99)
	{
		combo[0]++;
		combo[1] = combo[0] + 1;
	}
}