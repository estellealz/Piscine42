#include <unistd.h>

void	ft_print_reverse_string(char *string);
void	ft_putchar(char c);
int		check_number(int nb, long *num_temp, char *out_string, char *c_char);

void	ft_putnbr(int nb)
{
	char	number_string [12];
	char	c_char;
	char	ascii_offset;
	int		pos_in_string;
	long	n_temp;

	c_char = '\0';
	ascii_offset = 48;
	n_temp = nb;
	pos_in_string = check_number(nb, &n_temp, number_string, &c_char);
	while (n_temp > 0)
	{
		number_string[pos_in_string] = (char)(n_temp % 10l) + ascii_offset;
		pos_in_string++;
		n_temp = n_temp / 10l;
	}
	number_string[pos_in_string] = c_char;
	number_string[pos_in_string + 1] = '\0';
	ft_print_reverse_string(number_string);
}

int	check_number(int nb, long *num_temp, char *out_string, char *c_char)
{
	int	output;

	output = 0;
	if (nb < 0)
	{
		*c_char = '-';
		*num_temp = *num_temp * (-1l);
	}
	else if (nb == 0)
	{
		out_string[0] = '0';
		output++;
	}
	return (output);
}

void	ft_print_reverse_string(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(string[i]);
		i--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}