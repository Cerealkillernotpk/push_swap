/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_butterfly.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:04:28 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 19:34:34 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void from_a_to_b(t_stack **stack_a, t_stack **stack_b, int limit)
{
	int	i;
	int size;

	i = 0;
	size = ft_lstsize(*stack_a);
	while(i < size)
	{
		if ((*stack_a)->index < i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index < i +limit)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	from_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int max;
	int pos;
	int len;

	while(*stack_b)
	{
		len = ft_lstsize(*stack_b);
		max = max_index(*stack_b);
		pos = max_position(*stack_b, max);
		if (max == -1 || pos == -1)
			return ;
		if (pos <= len / 2)
			while((*stack_b)->index != max)
				rb(stack_b);
		else
			while((*stack_b)->index != max)
				rrb(stack_b);
		pa(stack_a, stack_b);
	}
}

int	algo_central(t_stack **stack_a, t_stack **stack_b)
{
	int	limit;
	int len;

	len = ft_lstsize(*stack_a);
	limit = len / 20 + 8;	
	from_a_to_b(stack_a, stack_b, limit);
	from_b_to_a(stack_a, stack_b);
	return (1);
}