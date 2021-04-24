
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*src2;

	len = 0;
	i = -1;
	while (src[len] != '\0')
		len++;
	src2 = (char *)malloc(sizeof(*src2) * (len + 1));
	while (++i < len)
		src2[i] = src[i];
	src2[len] = '\0';
	return (src2);
}

int		main(void)
{
	char str[] = "123456sfsf";
	printf("%s", ft_strdup(str));
	return (0);
}
