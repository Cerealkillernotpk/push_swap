# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 13:50:46 by adakhama          #+#    #+#              #
#    Updated: 2025/12/24 19:04:59 by adakhama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

NAME = push_swap

SRC =	main.c \
		ft_fill_struct.c \
		parser_verif.c \
		librairie/struct/ft_listiter.c \
		librairie/struct/ft_lstadd_back.c \
		librairie/struct/ft_lstadd_front.c \
		librairie/struct/ft_lstclear.c \
		librairie/struct/ft_lstdelone.c \
		librairie/struct/ft_lstlast.c \
		librairie/struct/ft_lstmap.c \
		librairie/struct/ft_lstnew.c \
		librairie/struct/ft_lstsize.c \
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	make -C librairie/printf -s
	make -C librairie/libft -s
	cc -o $(NAME) $(OBJ) $(CFLAGS) -Llibrairie/libft -Llibrairie/printf -l:libft.a -l:libftprintf.a

%.o:%.c
	$(CC) $(CFLAGS) $< -c -o $@ -I librairie/libft -I librairie/printf

clean: 
	-rm -f $(OBJ)
	make -C librairie/printf clean -s
	make -C librairie/libft clean -s

fclean: clean
	-rm -f $(NAME)
	make -C librairie/printf fclean -s
	make -C librairie/libft	fclean -s

re: fclean all
	make -C librairie/printf re -s
	make -C librairie/libft re -s

.PHONY: all clean fclean re