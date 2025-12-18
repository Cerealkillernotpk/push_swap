/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:18:04 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/16 17:31:55 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elem;
    
    elem = malloc(sizeof(t_list));
    if(!elem)
        return(NULL);
    elem->content = content;
    elem->next = NULL;
    return(elem);
}