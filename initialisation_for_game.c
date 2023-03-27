/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation_for_game.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:37:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/27 14:44:47 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	get_collectibles(char **map)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

int	x_for_s(char **str)
{
	int	i;

	i = 0;
	while (str[0][i])
		i++;
	return (i);
}

int	y_for_s(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
