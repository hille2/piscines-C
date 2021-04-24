NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
FC = file/main.c file/ft_display_file.c file/ft_putstr.c file/ft_putchar.c

.PHONY: all clean fclean re

all:
	gcc $(FLAGS) -o $(NAME) $(FC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
