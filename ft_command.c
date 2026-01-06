/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/06 14:42:55 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack **stack)
{
	t_stack *tmp;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		return(0);
	tmp = *stack;
	tmp->next = tmp->next->next;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
	return(1);
}

int push(t_stack **stack_send, t_stack **stack_receive)
{
	t_stack *tmp;

	if (*stack_send == NULL || stack_send == NULL)
		return(0);
	tmp = *stack_send;
	*stack_send = (*stack_send)->next;
	tmp->next = *stack_receive;
	*stack_receive = tmp;
	return(1);
}

int rotate(t_stack **stack)
{
	t_stack *tmp;

	if (*stack == NULL)
		return(0);
	tmp = *stack;
	ft_lstlast(*stack)->next = *stack;
	tmp->next = NULL;
	return(1);
}

int reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	
	if (*stack == NULL)
		return(0);
	tmp = ft_lstlast(*stack);
	tmp->next = *stack;
	ft_lstdelone(ft_lstlast(*stack),free);
	ft_lstlast(*stack)->next = NULL;
	return(1);
}