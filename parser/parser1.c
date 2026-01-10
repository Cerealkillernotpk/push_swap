/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:29:29 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/10 16:13:52 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_zero(t_stack **stack_a)
{
	while (*stack_a)
	{
		if (!ft_verif_repetition((*stack_a)->content, *stack_a))
			return (0);
		stack_a = &(*stack_a)->next;
	}
	return (1);
}

int	parse(t_stack **stack_a, char **argv, int argc)
{
	int	verif;

	if (argc == 1)
		return (1);
	verif = ft_parser(argv, argc, stack_a);
	if (!verif)
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(stack_a);
		return (1);
	}
	if (check_zero(stack_a) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(stack_a);
		return (1);
	}
	if (!ft_sort_verif(*stack_a))
	{
		free_stack(stack_a);
		return (1);
	}
	return (0);
}
