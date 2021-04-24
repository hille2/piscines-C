#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    int count;

    i = 0;
    count = 1;
    //if (str[0] == '\0')
    //    return(1);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            count = 1;
        //if (*str >= 48 && *str >= 57)
        else
            return(0);
        i++;
    }
    return(count);
}

int main()
{
    char s1[] = "";
    printf("%d\n", ft_str_is_alpha(s1));
    return 0;
}
