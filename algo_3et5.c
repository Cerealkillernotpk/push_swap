/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3et5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:14:56 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 20:45:02 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_sort3(t_stack **stack_a)
{
	int last;
	int middle;

	middle = *(int *)(*stack_a)->next->content;
	last = *(int *)(*stack_a)->next->next->content;
	if (*(int *)(*stack_a)->content > middle && *(int *)(*stack_a)->content > last)
		ra(stack_a);
	else if (*(int *)(*stack_a)->content < middle && middle > last)
		rra(stack_a);
	if (*(int *)(*stack_a)->content > middle)
		sa(stack_a);
}

// void	algo_sort5(t_stack **stack_a, t_stack **stack_b)
// {
// 	pb(stack_a, stack_b);
// 	pb(stack_a, stack_b);
// 	pb(stack_a, stack_b);
// 	if (!ft_sort_verif(stack_a))
// 		sa(stack_a);
// 	algo_sort3(stack_b);
	
// }