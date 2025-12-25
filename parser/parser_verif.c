/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/25 18:54:23 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_verif_repetition(char *str, t_stack *stack_a)
{
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (!ft_strncmp(str, stack_a->content, __UINT32_MAX__))
			return(0);
		stack_a = stack_a->next;
	}
	return (1);
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
		if (i > 0 && ft_isdigit(array[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_check_overflow(char *str)
{
	char *str2;

	str2 = ft_itoa(ft_atoi(str));
	if ( ft_strncmp(str, str2, ft_strlen(str)) != 0)
		return (0);
	else
		return (1);
}

int ft_verif(t_stack *stack_a)
{
	int verif;

	while (stack_a)
	{
		verif = 0;
		verif += ft_verif_number(stack_a->content);
		verif += ft_verif_repetition(stack_a->content, stack_a);
		verif += ft_check_overflow(stack_a->content);
		if (verif != 3)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
