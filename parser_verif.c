/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 15:22:30 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verif_repetition(char *str, t_stack *stack_a)
{
	while (stack_a)
	{
		if (str == stack_a->content)
			return(0);
		stack_a = stack_a->next;
	}
	return(1);
}
int ft_verif_number(char *array)
{
	int i;

	i = 0;
	if (!array || (!ft_isdigit(array[i]) && array [i] != '+' && array [i] != '-'))
		return (0);
	while (array[i])
	{
		ft_printf("%s\n", array[i]);
		if (i > 0 && ft_isdigit(array[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
int ft_verif(t_stack *stack_a)
{
    while (stack_a)
    {
		if (!ft_verif_number(stack_a->content))
			return(0);
		if (ft_verif_repetition(stack_a->content, stack_a))
			return(0);
        stack_a = stack_a->next;
    }
	return(1);
}
