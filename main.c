/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2026/01/03 15:31:13 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack *tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free((*stack)->content);
		free(*stack);
		*stack = tmp;
	}
}
int check_zero(t_stack **stack_a)
{
    while (*stack_a)
    {
        if (!ft_verif_repetition((*stack_a)->content, *stack_a))
            return(0);
        stack_a = &(*stack_a)->next;
    }
    return(1);
}

int test(t_stack **stack_a)
{
    // t_stack *stack_b;
    // int *tmp;

    // tmp = malloc(sizeof(int));
    // stack_b = NULL;
    // *tmp = 2145;
    // stack_b->content = tmp;
    (*stack_a)->c = 'a';
    swap(stack_a, 0);
    return (1);
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    int verif;

    stack_a = NULL;
    verif = ft_parser(argv, argc, &stack_a);
    if (!verif)
    {
        ft_printf("Error\n");
        free_stack(&stack_a);
        return (1);
    }
    if (check_zero(&stack_a) == 0)
    {
        ft_printf("Error\n");
        free_stack(&stack_a);
        return(1);
    }
    ft_printf("Parser works !!\n");
    if (ft_sort_verif(stack_a))
        ft_printf("Not sort\n");
    else
        ft_printf("Already sort\n");
    test(&stack_a);
    free_stack(&stack_a);
    return (0);
}
