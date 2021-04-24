#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int count;

    //if (*str == '\0')
    //    return(1);
    while (*str != '\0')
    {
        //if ((*str >= 48 && *str <= 57) || (*str >= 'a' && *str <= 'z') ||
        //    (*str >= 'A' && *str <= 'Z') || (*str == ('!' || '?' || '.' || ','
        //    || ';' || ':' || '"' || '(' || ')' || '-')))
        if (*str > 32 && *str < 126)
                count = 1;
        else
            return(0);
        *str++;
    }
    return(1);
}

int main()
{
    char s1[] = "";
    printf("%d\n", ft_str_is_printable(s1));
    return 0;
}
