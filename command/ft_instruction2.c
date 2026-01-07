/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/07 16:02:14 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack **stack_a)
{
	if (!swap(stack_a))
		return (0);
	else
		ft_printf("sa\n");
	return (1);
}

int	sb(t_stack **stack_b)
{
	if (!swap(stack_b))
		return (0);
	else
		ft_printf("sb\n");
	return (1);
}

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!push(stack_b, stack_a))
		return (0);
	else
		ft_printf("pa\n");
	return (1);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!push(stack_a, stack_b))
		return (0);
	else
		ft_printf("pb\n");
	return (1);
}
