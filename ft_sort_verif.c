/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:22:32 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/25 18:47:34 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sort_verif(t_stack *stack_a)
{
    int current;
    int next;

    while (stack_a && stack_a->next)
    {
        current = *(int *)stack_a->content;
        next = *(int *)stack_a->next->content;

        if (current > next)
            return (1);
        stack_a = stack_a->next;
    }
    return (0);
}
