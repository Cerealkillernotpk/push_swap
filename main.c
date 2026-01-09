/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 15:16:09 by adakhama         ###   ########.fr       */
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

void print_index(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->index);
		tmp = tmp->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	if (parse(&stack_a, argv, argc) == 1)
		return (1);
	distrib_index(stack_a);
	stack_b = ft_lstnew(&stack_b);
	stack_b->content = malloc(sizeof(int));
	print_index(stack_a);
	algo_central(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
