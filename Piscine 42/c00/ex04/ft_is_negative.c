#include <unistd.h>

void	ft_is_negative(int n)
{
	char	cp;
	char	cn;

	cp = 'P';
	cn = 'N';
	if (n >= 0)
	{
		write(1, &cp, 1);
	}
	else
	{
		write(1, &cn, 1);
	}
}