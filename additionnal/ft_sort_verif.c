/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:22:32 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/08 14:46:10 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_verif(t_stack *stack_a)
{
	int			current;
	int			next;
	t_stack		*tmp;

	tmp = stack_a;
	while (tmp)
	{
		ft_printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
	while (stack_a && stack_a->next)
	{
		current = *(int *)stack_a->content;
		next = *(int *)stack_a->next->content;
		if (current > next)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

int	ft_index(int current, t_stack *stack_a)
{
	int		i;

	i = 0;
	while (stack_a)
	{
		if (current > *(int *)stack_a->content)
			i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	distrib_index(t_stack *stack_a)
{
	int		current;
	int		index_tmp;
	t_stack	tmp;

	tmp = *stack_a;
	while (stack_a && stack_a->next)
	{
		current = *(int *)stack_a->content;
		index_tmp = ft_index(current, &tmp);
		stack_a = stack_a->next;
		stack_a->index = index_tmp;
		ft_printf("%d ", stack_a->index);
	}
	current = *(int *)stack_a->content;
	index_tmp = ft_index(current, &tmp);
	stack_a->index = index_tmp;
	ft_printf("%d\n", stack_a->index);
}
