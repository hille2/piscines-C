
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *count;
	 int i;

	i = -1;
	if (max <= min)
        	return(NULL);
	count = (int *)malloc(sizeof(*count) * (max - min));
	while (min <= max)
	{
		count[++i] = min;
		min++;
	}
	return (count);
}

int	main()
{
	int max, min, i;
	int *rez, *mmm;
	i = -1;
	max = -2147483646;
	min = -2147483649;
	rez = ft_range(min, max);
	for (; min < max; min++)
	{
		mmm = rez;		
		printf("%d\n", rez[++i]);
		mmm++;
	}
	return(0);
}
