unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	long	long_size;
	int		i;

	long_size = size;
	i = 0;
	while (i <= long_size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}