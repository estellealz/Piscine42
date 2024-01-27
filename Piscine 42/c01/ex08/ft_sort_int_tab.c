#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j <= size + 1)
		{
			if (j < size + 1)
			{
				if (tab[j] > tab[j - 1])
				{
					ft_swap(&tab[j], &tab[j - 1]);
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
}