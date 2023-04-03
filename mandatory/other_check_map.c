/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_check_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:52:31 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 14:59:41 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void	ft_rectangular_map(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i] != NULL)
	{
		if (ft_strlen(data->map[i]) != ft_strlen(data->map[0]))
		{	
			write(1, "Check is rect", 13);
			exit(1);
		}
		i++;
	}
	data->d = ft_strlen(data->map[0]);
	data->p = i;
}

void	pos_player(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
			{
				data->i = i;
				data->j = j;
			}
			j++;
		}
		i++;
	}
}
