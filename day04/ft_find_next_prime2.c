#include <stdio.h>

int ft_is_prime(int nb)
{
  int i;
  int count;

  i = 1;
  count = 0;
  if (nb == 0 || nb == 1)
    return (0);
  while (i <= nb)
  {
    if ((nb / i) * i == nb)
      count++;
    i++;
  }

  if (count == 2)
    return (1);
  else
    return (0);
}

int ft_find_next_prime(int nb)
{
  while (ft_is_prime(nb) != 1)
    nb++;
  return(nb);
}

int main()
{
  printf("%d", ft_find_next_prime(10));
  return (0);
}
