/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 23:56:43 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_tmp(void *content)
{
	ft_printf("check 1 : %s\n", content);
}

int *ft_affect(t_stack	*stack_a)
{
	int *tmp;

	tmp = malloc(sizeof(int));
	*tmp = ft_atoi(stack_a->content);
	free(stack_a->content);
	return (tmp);
}

int ft_parser(char **argv, int argc)
{
	t_stack *stack_a;
	int verif;

	stack_a = NULL;
	verif = ft_fill_stack(argv, argc, &stack_a);
	if (verif == 0)
		return (0);
	if (ft_verif(stack_a) == 0)
		return (0);
	while (stack_a)
	{
		stack_a->content = ft_affect(stack_a);
		ft_printf("check : %d\n", *(int *)(stack_a->content));
		stack_a = stack_a->next;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	i = ft_parser(argv, argc);
	ft_printf("verif = %d", i);
}
