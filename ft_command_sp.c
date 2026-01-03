/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_sp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/30 20:23:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ss(t_stack **stack_a, t_stack **stack_b)
{
	if (!swap(stack_a, 1) && !swap(stack_b, 1))
		return(0);
	ft_printf("ss");
	return (1);
}

int	swap(t_stack **stack, int ver)
{
	t_stack *tmp;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		return(0);
	tmp = *stack;
	tmp->next = tmp->next->next;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
	if (ver == 0)
		ft_printf("s%c", (*stack)->c);
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
	ft_printf("p%c", (*stack_receive)->c);
	return(1);
}