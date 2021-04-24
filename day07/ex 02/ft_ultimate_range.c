
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int max;
	int min;
	int *range;

	max = 10;
	min = -1;
	range = NULL;
	printf("%d \n", ft_ultimate_range(&range, min, max));
	return (0);
}
