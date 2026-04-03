/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:38:15 by adakhama          #+#    #+#             */
/*   Updated: 2026/04/03 15:54:49 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*arr_to_str(char **av)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		tmp = ft_strjoin(str, av[i]);
		free(str);
		str = tmp;
		tmp = ft_strjoin(str, " ");
		free(str);
		str = tmp;
		i++;
	}
	return (str);
}

void	free_str(char	**arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	verif_duplicate(char **av)
{
	int		i;
	int		j;
	char	**tmp_arr;
	char	*tmp_str;

	i = -1;
	tmp_str = arr_to_str(av);
	tmp_arr = ft_split(tmp_str, ' ');
	while (tmp_arr[++i])
	{
		j = 0;
		while (tmp_arr[i + (++j)])
		{
			if (ft_atoi(tmp_arr[i + j]) == ft_atoi(tmp_arr[i]))
			{
				free (tmp_str);
				free_str(tmp_arr);
				return (0);
			}
		}
	}
	free (tmp_str);
	free_str(tmp_arr);
	return (1);
}
