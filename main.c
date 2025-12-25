/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/25 18:30:43 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack_a;
	int i;

	stack_a = NULL;
	i = 0;
	i = ft_parser(argv, argc, &stack_a);
	if (i == 0)
		ft_printf("Error\n");
	else
	{
		ft_printf("Parser works\n !!");
		i = ft_sort_verif(stack_a);
		if (i == 1)
			ft_printf("Not sort\n");
		else
			ft_printf("Already sort\n");
	}
}
