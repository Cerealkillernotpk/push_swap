/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:05:16 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 23:03:30 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "librairie/printf/ft_printf.h"
# include "librairie/libft/libft.h"

typedef struct s_stack
{
	void            *content;
	struct s_stack	*next;
} t_stack;

/*Fonction parser*/

char	*ft_distrib(char **argv, int argc);
int		ft_parser(char **argv, int argc);
int		ft_fill_stack(char **argv, int argc, t_stack **stack_a);
int		ft_verif(t_stack *stack_a);
void	ft_add_node(char *str, t_stack **stack);

/*Librairie fonction de struct*/

void	ft_lstiter(t_stack *lst, void (*f)(void *));
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst, void (*del)(void *));
void	ft_lstdelone(t_stack *lst, void (*del)(void*));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_lstnew(void *content);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstnew_nbr(int content);

#endif