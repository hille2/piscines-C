#include <stdio.h>

char *ft_strcapitalize(char *str)
{
  int i;

  i = 0;
  //ft_strlowcase(str);
  while (str[i] != '\0')
  {
    if (str[0] >= 'a' && str[0] <= 'z')
      str[0] -= 32;
    if ((str[i] >= 'a' && str[i] <= 'z') && (str[i-1] == '+' || str[i-1] == '-'
        || str[i-1] == ' '))
      str[i] -=32;
    if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i-1] != '+' || str[i-1] != '-'
        || str[i-1] != ' '))
      str[i] += 32;
    i++;
  }
  return(str);
}

int main()
{
  char s1[] = "salut, coMMent ? 42mots quarante-deux; cinquante+et+un";
printf("%s", ft_strcapitalize(s1));
  return 0;
}
