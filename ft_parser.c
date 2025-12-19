/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:46:39 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/19 16:53:55 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checker(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if (j > 0 && !ft_isdigit(ft_atoi(&tab[i][j])))
				return (0);
			if (j == 0 && (!ft_isdigit(ft_atoi(&tab[i][j]))
				|| (tab [i][j] != '+' || tab [i][j] != '-')))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_add_nodd(char *str, t_stack *stack)
{
	ft_lstadd_back(&stack, ft_lstnew_nbr(ft_atoi(str)));
	stack = stack->next;
}

int	ft_parser(char **argv, int argc, t_stack *stack)
{
	char **tab;
	int	i;
	
	(void) stack;
	if 	(argc == 2)
		tab = ft_split(argv[1], ' ');
	else
		tab = argv;
	if (ft_checker(tab) == 0)
		return (0);
	i = 0;
	// while (tab[i])
	// 	ft_add_nodd(tab[i++], stack);
	// i = 0;
	while(tab[i])
		free(tab[i++]);
	return	(1);
}
