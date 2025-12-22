/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:18:48 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/22 20:14:01 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_node(char *str, t_stack *stack)
{
	ft_lstadd_back(&stack, ft_lstnew(str));
}

void	ft_multiple_arg(char**argv, t_stack *stack_a, int j)
{
	int k;
	char** tmp;
	
	k = 0;
	if (ft_split(argv[j], ' '))
	{
		tmp = ft_split(argv[j], ' ');
		while (tmp[k])
			ft_add_node(tmp[k++], stack_a);
	}
	else
		ft_add_node(argv[j], stack_a);
	k = 0;
	if (ft_split(argv[j], ' '))
	{
		while (tmp [k])
		{
			free(tmp[k++]);
		}
	}
}

void	ft_fill_stack(char **argv, int argc, t_stack *stack_a)
{
	char** tmp;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	tmp = NULL;
	if 	(argc == 2)
		tmp = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		while(argv[j])
		{
			ft_multiple_arg(argv, stack_a, j);
			j++;
		}
	}
	else
		stack_a->error = 0;
	while (tmp[i])
	{
		ft_add_node(tmp[i++], stack_a);
		free(tmp[i]);
	}
}
