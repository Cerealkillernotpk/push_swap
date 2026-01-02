/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:27:44 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/02 21:11:07 by adakhama         ###   ########.fr       */
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

int argv_checker(char **argv, int argc)
{
	int i;
	int j;
	char **tmp;

	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp =  ft_split(argv[i], ' ');
		if (!tmp[j])
			return (0);
		while (tmp[j])
			if (!tmp[j++])
				return (0);
		i++;
		j = 0;
	}
	while (tmp[j])
	{
		free(tmp[j]);
		j++;
	}
	free(tmp);
	return (1);
}

int	ft_parser(char **argv, int argc, t_stack **stack_a)
{
	int verif;
	t_stack *tmp;

	if (argc == 1)
		return(0);
	verif = ft_fill_stack(argv, argc, stack_a);
	if (argv_checker(argv, argc) == 0)
		return (0);
	if (verif == 0)
		return (0);
	if (ft_verif(*stack_a) == 0)
		return (0);
	tmp = *stack_a;
	while (tmp)
	{
		tmp->content = ft_affect(tmp);
		if (!tmp->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
