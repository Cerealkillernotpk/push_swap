/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 21:54:49 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_verif_repetition(char *str, t_stack *stack_a, int verif)
{
	while (stack_a)
	{
		if (str == stack_a->content)
			verif++;
		stack_a = stack_a->next;
	}
	return (verif);
}
int ft_verif_number(char *array)
{
	int i;

	i = 0;
	if (!array || (ft_isdigit(array[i]) == 0 &&	 array[i] != '+' && array[i] != '-'))
		return (0);
	i++;
	while (array[i])
	{
		ft_printf("i + 1 : %c\n", array[i]);
		if (i > 0 && ft_isdigit(array[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
int ft_verif(t_stack *stack_a)
{
	int verif;

	while (stack_a)
	{
		verif = ft_verif_number(stack_a->content);
		ft_printf("num : %d\n", verif);
		if (!verif)
			return (0);
		verif = 0;
		ft_verif_repetition(stack_a->content, stack_a, verif);
		ft_printf("rep : %d\n", verif);
		if (verif > 1)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
