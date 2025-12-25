/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:22:32 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/26 00:22:32 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sort_verif(t_stack *stack_a)
{
    int current;
    int next;

	t_stack *tmp = stack_a;
	while (tmp)
	{
	    ft_printf("%d ", *(int *)tmp->content);
	    tmp = tmp->next;
	}
	ft_printf("\n");

    while (stack_a && stack_a->next)
    {
        current = *(int*)stack_a->content;
        next = *(int*)stack_a->next->content;
        if (current > next)
            return (1);
        stack_a = stack_a->next;
    }
    return (0);
}

