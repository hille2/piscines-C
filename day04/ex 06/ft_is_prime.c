#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	int count;

	i = 1;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if ((nb / i) * i == nb)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d\n", ft_is_prime(1));
	return (0);
}
