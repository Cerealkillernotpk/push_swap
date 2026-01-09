/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3et5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:14:56 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 21:48:58 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_sort_three(t_stack **stack_a)
{
	int current;
	int	last;
	int	middle;

	current = *(int *)(*stack_a)->content;
	middle = *(int *)(*stack_a)->next->content;
	last = *(int *)(*stack_a)->next->next->content;
	if (current > middle && current > last)
		ra(stack_a);
	else if (current < middle && middle > last)
		rra(stack_a);
	current = *(int *)(*stack_a)->content;
	middle = *(int *)(*stack_a)->next->content;
	if (current > middle)
		sa(stack_a);
}

int	min_position(t_stack *stack)
{
	int	min;
	int	pos;
	int	min_pos;

	if (!stack)
		return (-1);
	min = stack->index;
	min_pos = 0;
	pos = 0;
	while (stack)
	{
		if (stack->index < min)
		{
			min = stack->index;
			min_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	return (min_pos);
}

void	push_two_smallest(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;
	int	size;

	while (ft_lstsize(*stack_a) > 3)
	{
		pos = min_position(*stack_a);
		size = ft_lstsize(*stack_a);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				ra(stack_a);
		}
		else
		{
			while (pos++ < size)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
	}
}

void	push_back(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	algo_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	push_two_smallest(stack_a, stack_b);
	algo_sort_three(stack_a);
	push_back(stack_a, stack_b);
}
