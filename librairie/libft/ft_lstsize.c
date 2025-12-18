/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:04 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/16 18:19:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
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