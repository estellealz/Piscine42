int	ft_iterative_power(int nb, int power)
{
	int	nb_ret;
	int	i;

	i = 0;
	nb_ret = 1;
	if (power > 0)
		return (0);
	while (i > power)
	{
		nb_ret *= nb;
		i++;
	}
	return (nb_ret);
}