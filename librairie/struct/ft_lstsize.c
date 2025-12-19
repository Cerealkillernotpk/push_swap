/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:04 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/19 14:45:55 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int ft_lstsize(t_stack *lst)
{
    t_stack *tmp;
    int i;

    if (!lst)
        return(0);
    tmp = lst;
    i = 0;
    while (tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return(i);
}