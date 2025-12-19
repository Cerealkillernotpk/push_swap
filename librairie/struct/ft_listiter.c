/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:43:22 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/19 14:43:06 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_lstiter(t_stack *lst, void (*f)(void *))
{
    t_stack *tmp;
    
    tmp = lst;
    while (tmp)
    {
        f(tmp->content);
        tmp = tmp->next;
    }
}
