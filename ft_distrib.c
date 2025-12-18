/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distrib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:00:00 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/18 15:50:49 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_distrib(char **argv, int argc)
{
	int	i;
	t_list stack;
	
	i = 0;
	while(i < argc)
	{ 
		stack.error = ft_parser(argv, argc, &stack);
		if (!stack.error)
			return (NULL);
	}
}

// t_list stack;
// int i =1;
// char **tab

// while (tab[i])
// {
	
// }