/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:11:01 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/23 18:14:18 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_lstadd_back(t_stack **lst, t_stack *new)
{
    t_stack *last;

    last = ft_lstlast(*lst);
    if(!last)
        *lst = new;
    else
        last->next = new;
}
