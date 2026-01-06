/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:23:16 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/30 20:23:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_printf("ra\n");
}

int rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_printf("rb\n");
}

int rra(t_stack **stack_a)
{
    reverse_rotate(stack_a);
    ft_printf("rra\n");
}

int rrb(t_stack **stack_b)
{
    reverse_rotate(stack_b);
    ft_printf("rrb\n");
}