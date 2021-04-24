#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return(dest);
}

int main()
{
  char d1[] = "qqqqqqqqq";
  char d2[] = "wwwwww";
  int n = 3;
  printf("%s", ft_strncpy(d2, d1, n));
  return 0;
}
