#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    //i++;
    while (src[j] != '\0')
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
    char s2[] = "789";
    printf("%s", ft_strcat(s1, s2));
    return 0;
}
