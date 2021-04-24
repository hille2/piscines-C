NAME = colle-2
FLAGS = -Wall -Wextra -Werror
FC = file/main.c file/ft_output_res.c file/ft_putstr.c file/ft_putchar.c file/ft_putnbr.c file/ft_size_data.c file/ft_strcat.c

.PHONY: all clean fclean re

all:
	gcc $(FLAGS) -o $(NAME) $(FC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

