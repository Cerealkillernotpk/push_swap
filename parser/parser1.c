/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:29:29 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/08 14:44:13 by adakhama         ###   ########.fr       */
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

	verif = ft_parser(argv, argc, stack_a);
	if (!verif)
	{
		ft_printf("Error\n");
		free_stack(stack_a);
		return (1);
	}
	if (check_zero(stack_a) == 0)
	{
		ft_printf("Error\n");
		free_stack(stack_a);
		return (1);
	}
	ft_printf("Parser works !!\n");
	if (ft_sort_verif(*stack_a))
		ft_printf("Not sort\n");
	else
	{
		ft_printf("Already sort\n");
		free_stack(stack_a);
		return (1);
	}
	return (0);
}
