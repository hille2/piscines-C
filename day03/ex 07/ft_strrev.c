
#include <stdio.h>
char *ft_strrev(char *str)
{
  int i;
  int j;
  char sw;

  i = 0;
  j = 0;
  while (str[i] != '\0')
  {
    i++;
  }

  i--;
  while (i > j)
  {
    sw = str[i];
    str[i] = str[j];
    str[j] = sw;
    i--;
    j++;
  }
  return(str);
}

int main()
{
  char str[] = "qewer";
  printf("%s", ft_strrev(str));
  return(0);
}
