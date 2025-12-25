/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:27:44 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/25 18:54:59 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *ft_affect(t_stack	*stack_a)
{
	int *tmp;

	tmp = malloc(sizeof(int));
	*tmp = ft_atoi(stack_a->content);
	free(stack_a->content);
	return (tmp);
}

int	ft_parser(char **argv, int argc, t_stack **stack_a)
{
	int verif;

	verif = ft_fill_stack(argv, argc, stack_a);
	if (verif == 0)
		return (0);
	if (ft_verif(*stack_a) == 0)
		return (0);
	ft_printf("Check :\n");
	while (*stack_a)
	{
		(*stack_a)->content = ft_affect(*stack_a);
		ft_printf("%d\n", *(int *)((*stack_a)->content));
		*stack_a = (*stack_a)->next;
	}
	return (1);
}