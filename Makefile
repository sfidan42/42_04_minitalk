NAME		=	libft/libft.a ft_printf/libftprintf.a
flags		=	-Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	make -C ./libft
	make -C ./ft_printf
	gcc $(flags) server.c $(NAME) -o server
	gcc $(flags) client.c $(NAME) -o client

clean:
	rm -f client server
	make -C ./ft_printf clean
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all server client clean fclean re