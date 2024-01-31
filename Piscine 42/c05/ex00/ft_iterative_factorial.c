int	ft_iterative_factorial(int nb)
{
	int	nb_ret;

	if (nb < 0)
		return (0);
	nb_ret = 1;
	while (nb > 1)
		nb_ret *= nb--;
	return (nb_ret);
}