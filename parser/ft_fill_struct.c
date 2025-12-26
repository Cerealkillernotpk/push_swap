/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:18:48 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/26 17:36:11 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_add_node(char *str, t_stack **stack_a)
{
	char *dup;

	dup = ft_strdup(str);
	if (!dup)
		return;
	if (ft_lstsize(*stack_a) == 0)
		*stack_a = ft_lstnew(dup);
	else
		ft_lstadd_back(stack_a, ft_lstnew(dup));
}
void ft_multiple_arg(char **argv, t_stack **stack_a, int j)
{
	int k;
	char **tmp;

	k = 0;
	tmp = ft_split(argv[j], ' ');
	if (!tmp)
		return;
	while (tmp[k])
	{
		ft_add_node(tmp[k], stack_a);
		free(tmp[k]);
		k++;
	}
	free(tmp);
}

void ft_single_arg(char **argv, t_stack **stack_a)
{
	char **tmp;
	int i;

	i = 0;
	tmp = ft_split(argv[1], ' ');
	if (!tmp)
		return;
	while (tmp[i])
	{	
		ft_add_node(tmp[i], stack_a);
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

int	ft_fill_stack(char **argv, int argc, t_stack **stack_a)
{
	int j;

	j = 1;
	if (argc == 2)
		ft_single_arg(argv, stack_a);
	else if (argc > 2)
	{
		while (argv[j])
		{
			ft_multiple_arg(argv, stack_a, j);
			j++;
		}
	}
	else
		return(0);
	return(1);
}
