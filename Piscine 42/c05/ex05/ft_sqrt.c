int	ft_sqrt(int nb)
{
	int	i;
	int	j;
	int	nb_ret;

	i = 0;
	j = 1;
	nb_ret = 0;
	if (nb < 0)
		return (0);
	while (j <= nb && i < 46340)
	{
		i++;
		j = i * i;
	}
	nb_ret = (i - 1);
	if (nb_ret * nb_ret == nb)
		return (nb_ret);
	else
		return (0);
}