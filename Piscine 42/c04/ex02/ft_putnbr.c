#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		mod;
	int		nb_divided;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		mod = nb % 10;
		nb_divided = nb / 10;
		ft_putnbr(nb_divided);
	}
	if (nb > 9 )
		ft_putchar(mod + '0');
	else
		ft_putchar(nb + '0');
}