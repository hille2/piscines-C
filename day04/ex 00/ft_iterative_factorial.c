#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int fact;
	
	i = 1;
	fact = 1;
	if (nb > 0 && nb < 13)
	{
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}

int main()
{
	int nb = 12;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
