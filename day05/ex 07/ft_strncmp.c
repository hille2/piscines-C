#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (s1[i] == s2[i])
      i++;
    else
      return(s1[i] - s2[i]);
  }
  return(0);
}

int main()
{
  char s1[] = "a";
  char s2[] = "aaa";
  int n = 4;
  printf("%d", ft_strncmp(s1, s2, n));
  return(0);
}
