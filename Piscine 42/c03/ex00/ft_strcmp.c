int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	char			diff;
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char *) s1;
	s2u = (unsigned char *) s2;
	i = 0;
	diff = 0;
	while (s1u[i] && s2u[i])
	{
		diff = s1u[i] - s2u[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	diff = s1u[i] - s2u[i];
	return (diff);
}