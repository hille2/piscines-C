#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return(dest);
}

int main()
{
  char d1[] = "wqerqw";
  char d2[] = "qq";
  printf("%s", ft_strcpy(d2 , d1));
  return 0;
}
