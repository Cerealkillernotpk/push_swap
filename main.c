/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:50:12 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/22 19:52:13 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;
    int j;
    
    j = 1;
    i = ft_parser(argv, argc);
    // while(argv[j])
    // {
    //     ft_printf("%s \n", argv[j++]);
    // }
    ft_printf("verif = %d", i);
}