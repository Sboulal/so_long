/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:08 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 16:04:10 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	find_collectibles(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (ft_strchr_1(map[i], 'C') == 1)
			return (0);
		i++;
	}
	return (1);
}

void	check_cep(t_data *data)
{
	if (find_exit(data->map) != 0)
	{
		write(1, "NOT VALID TRY E!!!!!", 19);
		exit(1);
	}
	if (find_collectibles(data->map) != 0)
	{
		write(1, "NOT VALID TRY C!!!!!", 19);
		exit(1);
	}
	if (find_player(data) != 1)
	{
		write(1, "NOT VALID TRY P!!!!!", 19);
		exit(1);
	}
	if (check_carct(data->map) != 0)
	{
		write(1, "INVALID", 7);
		exit(1);
	}
}

void	ft_check_walls(char **map)
{
	int	i;
	int	a;

	i = 0;
	a = ft_len_map(map);
	while (i < ft_strlen(map[0]))
	{
		if (map[0][i] != '1')
			write(1, "WALL WARNING", 12);
		i++;
	}
	i = 0;
	while (i < ft_strlen(map[a - 1]))
	{
		if (map[a - 1][i] != '1')
			write(1, "WALL WARNING", 12);
		i++;
	}
	i = 0;
	while (i < a)
	{
		if (map[i][ft_strlen(map[i]) - 1] != '1' || map[i][0] != '1')
			write(1, "WALL WARNING", 12);
		i++;
	}
}

int	check_carct(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'E' && \
					map[i][j] != 'C' && map[i][j] != 'P')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
