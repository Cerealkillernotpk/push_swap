/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 21:40:51 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free((*stack)->content);
		free(*stack);
		*stack = tmp;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	if (parse(&stack_a, argv, argc) == 1)
		return (1);
	distrib_index(stack_a);
	stack_b = NULL;
	if (ft_lstsize(stack_a) == 2)
		sa(&stack_a);
	else if (ft_lstsize(stack_a) == 3)
		algo_sort_three(&stack_a);
	else if (ft_lstsize(stack_a) == 5)
		algo_sort_five(&stack_a, &stack_b);
	else
		algo_central(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
