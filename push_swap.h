/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:05:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 19:44:30 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "library/printf/ft_printf.h"
# include "library/libft/libft.h"

typedef struct s_stack
{
	void			*content;
	int				index;
	struct s_stack	*next;
}	t_stack;

/*Main*/

void		free_stack(t_stack **stack);

/*Fonction parser*/

int			parse(t_stack **stack_a, char **argv, int argc);
int			ft_check_overflow(char *str);
int			ft_parser(char **argv, int argc, t_stack **stack_a);
int			ft_fill_stack(char **argv, int argc, t_stack **stack_a);
int			ft_verif(t_stack *stack_a);
void		ft_add_node(char *str, t_stack **stack);

/*Librairie fonction de struct*/

int			ft_lstsize(t_stack *lst);
void		ft_lstiter(t_stack *lst, void (*f)(void *));
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstclear(t_stack **lst, void (*del)(void *));
void		ft_lstdelone(t_stack *lst, void (*del)(void*));
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack		*ft_lstnew(void *content);
t_stack		*ft_lstnew_nbr(int content);

/*Algo*/

int			algo_central(t_stack **stack_a, t_stack **stack_b);
int			ft_sort_verif(t_stack *stack_a);
int			ft_verif_repetition(char *str, t_stack *stack_a);
int			max_index(t_stack *stack);
int			max_position(t_stack *stack, int max);
void		distrib_index(t_stack *stack_a);
void		algo_sort3(t_stack **stack_a);

/*More*/

long long	ft_atoll(const char *str);

/*Command*/

int			push(t_stack **stack_send, t_stack **stack_receive);
int			swap(t_stack **stack);
int			rotate(t_stack **stack);
int			reverse_rotate(t_stack **stack);

/*Instructions*/

int			ss(t_stack **stack_a, t_stack **stack_b);
int			rr(t_stack **stack_a, t_stack **stack_b);
int			rrr(t_stack **stack_a, t_stack **stack_b);
int			sa(t_stack **stack_a);
int			sb(t_stack **stack_b);
int			pa(t_stack **stack_a, t_stack **stack_b);
int			pb(t_stack **stack_a, t_stack **stack_b);
int			ra(t_stack **stack_a);
int			rb(t_stack **stack_b);
int			rra(t_stack **stack_a);
int			rrb(t_stack **stack_b);

#endif