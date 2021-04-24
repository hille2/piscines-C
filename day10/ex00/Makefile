TARGET = libft.a
INCL = ./includes/
SRCS = ./srcs/
SFL = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c $(SRCS)ft_strlen.c $(SRCS)ft_swap.c
FLO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror
CLN = /bin/rm -f

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET):
	gcc -c $(FLAGS) $(SFL) -I $(INCL)
	ar rc $(TARGET) $(FLO)

clean: 
	$(CLN) $(FLO)

fclean:
	$(CLN) $(FLO) $(NAME)

re:	fclean all
