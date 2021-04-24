#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int vhod;
  int rem;

  i = 0;
  if (to_find[0] == '\0')
    return(str);
  while (str[i] != '\0')
  {
      vhod = 0;
      if (str[i] == to_find[vhod])
      {
          rem = i;
          while (str[i] == to_find[vhod])
          {
              if (to_find[vhod + 1] == '\0')
                return(&str[rem]);
              i++;
              vhod++;
          }
          i = rem;
      }
      i++;
  }
  return(0);
}

int main()
{
  char d1[] = "qwe";
  char d2[] = "weqwwwqwewwqgfgqjjjh";
  int n = 3;
  printf("%s", ft_strstr(d2, d1));
  return 0;
}
