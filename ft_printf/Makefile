SRC	=	ft_printf.c ft_printf_utils.c
OBJ	=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
RM		=	rm -rf
AR		=	ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
