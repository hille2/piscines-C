#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int negt;
	int rez;

	i = 0;
	negt = 1;
	rez = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
		str[i] == '\r' || str[i] == '\f')
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
			negt *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rez = rez*10 + (str[i]-'0');
		i++;
	}
	return(rez*negt);
}

int	main()
{
	printf("%d", ft_atoi("   --A23dsf"));
	return (0);
}
