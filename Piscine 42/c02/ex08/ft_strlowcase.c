char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 64 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}