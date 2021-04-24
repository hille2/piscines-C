#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    //i++;
    while (j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char s1[] = "123456";
    char s2[] = "7890";
    int n = 3;
    printf("%s", ft_strncat(s1, s2, n));
    return 0;
}
