
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char alf;

	alf = 'a';
	while (alf <= 'z')
		ft_putchar(alf++);
}

int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
