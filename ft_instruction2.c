/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/30 20:23:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sa(t_stack **stack_a)
{
    swap(stack_a);
    ft_printf("sa\n");
}

int sb(t_stack **stack_b)
{
    swap(stack_b);
    ft_printf("sb\n");
}

int pa(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_b, stack_a);
    ft_printf("pa\n");
}

int pb(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_a, stack_b);
    ft_printf("pb\n");
}