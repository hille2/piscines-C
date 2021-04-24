#include <stdio.h>

char *ft_strupcase(char *str)
{
  int i;

   i = 0;
   while (str[i] != '\0')
   {
     if (str[i] >= 'A' && str[i] <= 'Z')
     {
       str[i] += 32;
     }
     i++;
   }
   return(str);
}

 int main()
{
  char s1[] = "qXCVwwQw1";
  printf("%s\n", ft_strupcase(s1));
  return 0;
}
