# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 13:50:46 by adakhama          #+#    #+#              #
#    Updated: 2025/12/19 15:11:09 by adakhama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRC =	ft_parser.c \
		ft_distrib.c \
		librairie/struct/ft_listiter.c \
		librairie/struct/ft_lstadd_back.c \
		librairie/struct/ft_lstadd_front.c \
		librairie/struct/ft_lstclear.c \
		librairie/struct/ft_lstdelone.c \
		librairie/struct/ft_lstlast.c \
		librairie/struct/ft_lstmap.c \
		librairie/struct/ft_lstnew.c \
		librairie/struct/ft_lstsize.c \
		librairie/struct/ft_lstnew_nbr\
	
OBJ = $(SRC:.c=.o) $(PRINTF:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	make -C librairie/printf -s
	make -C librairie/libft -s
	cc -o $(NAME) $(OBJ) $(CFLAGS)

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