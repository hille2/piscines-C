#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	i = 0;
	count = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			count *= nb;
			i++;
		}
	}
	return (count);
}

int main()
{
	printf("%d", ft_iterative_power(3, 3));
	return (0);
}
