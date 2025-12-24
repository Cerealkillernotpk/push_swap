/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:09:50 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/19 15:13:50 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack *ft_lstnew_nbr(int nbr)
{
    t_stack *elem;
    
    elem = malloc(sizeof(t_stack));
    if(!elem)
        return(NULL);
    elem->nbr = nbr;
    elem->next = NULL;
    return(elem);
}