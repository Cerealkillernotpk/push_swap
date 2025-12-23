/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 21:56:03 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_tmp(void *content)
{
	ft_printf("check 1 : %s\n", content);
}

int	ft_parser(char **argv, int argc)
{
	t_stack *stack_a;
	
	stack_a = NULL;
	ft_fill_stack(argv, argc, &stack_a);
	if (stack_a->error == 1)
		return(0);
    ft_lstiter(stack_a, ft_tmp);
	if (ft_verif(stack_a) == 0)
		return (0);
	while (stack_a)
    {
		stack_a->nbr = ft_atoi(stack_a->content);
		ft_printf("check 2 : %d\n", stack_a->nbr);
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
// int main()
// {
//     t_stack *stack;
//     char    *str;
//     int     i;
    
//     stack = malloc(sizeof(t_stack));
//     stack->next = NULL;
//     str = NULL;
//     i = 0;
//     (void)i;
//     str = "jesuistonpere";
//     stack->content = 0;
//     ft_add_node(str, stack);
//     ft_printf("%s", stack->content);
//     stack=stack->next;
//     ft_printf("%s", stack->content);
// }
