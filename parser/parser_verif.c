/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/09 21:17:39 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_verif_repetition(char *str, t_stack *stack_a)
{
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (!ft_strncmp(str, stack_a->content, __UINT32_MAX__))
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	ft_verif_number(char *array)
{
	int	i;

	i = 0;
	if (!array
		|| (ft_isdigit(array[i]) == 0 && array[i] != '+' && array[i] != '-'))
		return (0);
	if ((array[i] == '+' || array[i] == '-') && !array[i + 1])
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

int	ft_check_overflow(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(str) > 11)
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] == '0')
			i++;
		while (str[i + j])
			j++;
		if (j > 11)
			return (0);
	}
	if (ft_atoll(str) > INT_MAX || ft_atoll(str) < INT_MIN)
		return (0);
	else
		return (1);
}

int	ft_verif(t_stack *stack_a)
{
	int	verif;

	while (stack_a)
	{
		verif = 0;
		verif += ft_verif_number(stack_a->content);
		verif += ft_check_overflow(stack_a->content);
		if (verif != 2)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
