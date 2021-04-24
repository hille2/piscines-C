#include <stdio.h>

in	 ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] > s2[i])
			return(1);
		if (s1[i] < s2[i])
			return(-1);
	}
	return(0);
}

int	main()
{
	char s1[] = "ab";
	char s2[] = "w";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
