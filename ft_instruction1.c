/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/06 16:18:22 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (!swap(stack_a) && !swap(stack_b))
		return (0);
	ft_printf("ss\n");
	return (1);
}

int	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!rotate(stack_a) && !rotate(stack_b))
		return (0);
	ft_printf("rr\n");
	return (1);
}

int	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (!reverse_rotate(stack_a) && !reverse_rotate(stack_b))
		return (0);
	ft_printf("rrr\n");
	return (1);
}
