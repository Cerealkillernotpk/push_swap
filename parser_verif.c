/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_verif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:35:28 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/22 19:27:36 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_verif(t_stack stack_a)
{
    while (stack_a)
    {
        
    }
}

int ft_verif_repetition(char**argv)
{}
int ft_verif_number(char *array)
{
	int i;
	int j;

	i = 0;
	while (array[i])
	{
		ft_printf("%s\n", array[i]);
		j = 0;
		if (!ft_isdigit(array[i][j]) && array [i][j] != '+' && array [i][j] != '-')
				return (0);
		while(array[i][j])
		{
			if (j > 0 && ft_isdigit(array[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
