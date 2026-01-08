/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/08 14:43:18 by adakhama         ###   ########.fr       */
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
	char	**tmp;
	int		i;

	i = 0;
	if (ft_strlen(str) > 11)
	{
		tmp = ft_split(str, '0');
		if (tmp != NULL && ft_strlen(*tmp) > 11)
		{
			while (tmp[i])
				free(tmp[i++]);
			free(tmp);
			return (0);
		}
		while (tmp[i])
			free(tmp[i++]);
		free(tmp);
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
