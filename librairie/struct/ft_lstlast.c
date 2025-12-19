/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:44:24 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/19 14:45:46 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack *ft_lstlast(t_stack *lst)
{
    t_stack *tmp;
    
    if(!lst)
        return(NULL);
    tmp = lst;
    while (tmp->next)
        tmp = tmp->next;
    return(tmp);
}
