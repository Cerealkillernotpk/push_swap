/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:52:42 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/17 15:44:30 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void func(t_info *info)
{
    printf("%i", info->ind);
    return ;
}

#include <stdio.h>
int main()
{
    t_list info;
    t_list info2;
    t_list tmp;

    tmp = info;
    while (tmp.next)
        tmp = tmp->next;
    info.next = &info2;
    info.nbr = 0;
    func(&info);
}