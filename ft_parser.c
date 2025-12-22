/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:46:39 by adakhama          #+#    #+#             */
/*   Updated: 2025/12/22 19:23:29 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_free_tab(char **tab, int i, int argc)
// {
// 	if (argc == 2)
// 			while(tab[i])
// 				free(tab[i++]);
// }

// void ft_fill_array(char**tab, char***argv)
// {
// 	int i;
// 	int j;
// 	int k;
// 	char **tmp;
	
// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (argv[i])
// 	{
// 		if (ft_split(argv[i], ' '))
// 		{
// 			tmp = ft_split(argv[i], ' ');
// 			while(tmp[k])
// 				tab[j++] = tmp[k++];
// 			k = 0;
// 		}
// 		else
// 			tab[j] = argv[i];
// 		j++;
// 		i++;
// 	}
// }

// int	ft_parser(char **argv, int argc, t_stack *stack)
// {
// 	char **tab;
// 	int	i;
	
// 	(void) stack;
// 	i = 1;
// 	if 	(argc == 2)
// 		tab = ft_split(argv[1], ' ');
// 	else if (argc >= 2)
// 	{
// 		tab = &argv[1];
// 	}
// 	else
// 		return(0);
// 	if (!tab)
// 	{
// 		ft_free_tab(tab, i, argc);
// 		return (0);
// 	}
// 	if (ft_verif_number(tab) == 0)
// 		return (0);
// 	i = 0;
// 	// while (tab[i])
// 	// 	ft_add_node(tab[i++], stack);
// 	// i = 0;
// 	ft_free_tab(tab, i, argc);
// 	return	(1);
// }
int	ft_parser(char **argv, int argc)
{
	t_stack stack_a;
	
	ft_fill_stack(argv, argc);
	if (stack_a.error == 1)
		return(0);
	if (ft_verif(stack_a) == 0)
		return (0);
	return	(1);
}
