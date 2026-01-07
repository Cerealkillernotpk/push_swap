/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/07 16:03:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack **stack_a)
{
	if (!rotate(stack_a))
		return (0);
	else
		ft_printf("ra\n");
	return (1);
}

int	rb(t_stack **stack_b)
{
	if (!rotate(stack_b))
		return (0);
	else
		ft_printf("rb\n");
	return (1);
}

int	rra(t_stack **stack_a)
{
	if (!reverse_rotate(stack_a))
		return (0);
	else
		ft_printf("rra\n");
	return (1);
}

int	rrb(t_stack **stack_b)
{
	if (!reverse_rotate(stack_b))
		return (0);
	else
		ft_printf("rrb\n");
	return (1);
}
