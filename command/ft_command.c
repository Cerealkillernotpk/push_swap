/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/06 20:16:27 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !stack || !(*stack)->next)
		return (0);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (1);
}

int	push(t_stack **stack_send, t_stack **stack_receive)
{
	t_stack	*tmp;

	if (*stack_send == NULL || stack_send == NULL)
		return (0);
	tmp = *stack_send;
	*stack_send = tmp->next;
	tmp->next = *stack_receive;
	*stack_receive = tmp;
	return (1);
}

int	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !stack || !(*stack)->next)
		return (0);
	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	last = ft_lstlast(*stack);
	last->next = first;
	return (1);
}

int	reverse_rotate(t_stack **stack)
{
	t_stack	*prev;
	t_stack	*last;

	if (!*stack || !stack || !(*stack)->next)
		return (0);
	prev = *stack;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}
