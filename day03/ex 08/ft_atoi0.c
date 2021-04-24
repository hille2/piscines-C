int	ft_atoi(char *str)
{
	int i;
  int j;
  int zn;

  i = j = 0;
  zn = 1;
  while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'
      || str[i] == '\f' || str[i] == '\r')
          i++;

  if (str[i] == '-')
     zn = -1;

  if (str[i] == '+' || str[i] == '-')
  {
	  if (str[i] == '-')
		  zn = -1;
	  i++;
  }
	
  while (str[i] >= '0' && str[i] <= '9')
  {
	  j = j * 10 + (str[i] -'0');
	  i++;
  }:
  return (j* zn);

}

int main ()
{
  char std[] = "--88dd";
  printf("%d", ft_atoi(std));
  return (0);
}
