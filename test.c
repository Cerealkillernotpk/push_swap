/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:39:58 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 16:51:00 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_node(char *str, t_stack *stack)
{
	ft_lstadd_back(&stack, ft_lstnew(str));
	if (!stack)
		stack->error = 1;
}

int main()
{
    t_stack *stack;
    char    **str;
    int     i;
    
    stack = malloc(sizeof(t_stack));
    str = NULL;
    i = 0;
    str[0] = "jesuistonpere";
    str[1] = "luke";
    stack->content = 0;
    while (str[i])
    {
        ft_add_node(str[i++], stack);   
        ft_printf("%s\n", str);
    }
    ft_printf("%s", stack);
}