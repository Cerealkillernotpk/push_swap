/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:27:44 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/10 16:13:37 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_affect(t_stack *stack_a)
{
	int	*tmp;

	tmp = malloc(sizeof(int));
	*tmp = ft_atoi(stack_a->content);
	free(stack_a->content);
	return (tmp);
}

void	ft_free_tmp(char **tmp)
{
	int	j;

	j = 0;
	while (tmp[j])
	{
		free(tmp[j]);
		j++;
	}
	free(tmp);
}

int	secure_tmp(char **tmp, int j)
{
	if (!tmp[j])
	{
		ft_free_tmp(tmp);
		return (0);
	}
	return (1);
}

int	argv_checker(char **argv, int argc)
{
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!secure_tmp(tmp, j))
			return (0);
		while (tmp[j])
		{
			if (!tmp[j++])
			{
				ft_free_tmp(tmp);
				return (0);
			}
		}
		i++;
		j = 0;
		ft_free_tmp(tmp);
	}
	return (1);
}

int	ft_parser(char **argv, int argc, t_stack **stack_a)
{
	int			verif;
	t_stack		*tmp;

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
