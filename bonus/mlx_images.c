/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:16:07 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/27 15:07:43 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_img(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	data->wall = mlx_xpm_file_to_image(data->wall, "imagesxpm/Wall.xpm", \
			&j, &i);
	data->player = mlx_xpm_file_to_image(data->mlx, "imagesxpm/Player.xpm", \
			&i, &j);
	data->exit = mlx_xpm_file_to_image(data->mlx, "imagesxpm/Exit.xpm", &i, &j);
	data->exit_0 = mlx_xpm_file_to_image(data->mlx, "imagesxpm/Exit1.xpm", \
			&i, &j);
	data->collectibles = mlx_xpm_file_to_image(data->mlx, \
			"imagesxpm/bitcoina.xpm", &i, &j);
	data->bg = mlx_xpm_file_to_image(data->mlx, "imagesxpm/Floor.xpm", &i, &j);
}

void	image_to_window2(t_data data, int k, int l)
{
	if (data.map[data.j][data.i] == 'P')
		mlx_put_image_to_window(data.mlx, data.win, data.player, k, l);
	else if (data.map[data.j][data.i] == 'C')
		mlx_put_image_to_window(data.mlx, data.win, data.collectibles, k, l);
	else if (data.map[data.j][data.i] == 'E' && data.co == 0)
		mlx_put_image_to_window(data.mlx, data.win, data.exit_0, k, l);
	else if (data.map[data.j][data.i] == 'E' && data.co != 0)
		mlx_put_image_to_window(data.mlx, data.win, data.exit, k, l);
}

void	image_to_window(t_data data)
{
	int	l;
	int	k;

	data.j = 0;
	l = 0;
	k = 0;
	while (data.j < data.y)
	{
		data.i = 0;
		while (data.i < data.x)
		{
			if (data.map[data.j][data.i] == '1')
				mlx_put_image_to_window(data.mlx, data.win, data.wall, k, l);
			else if (data.map[data.j][data.i] == '0')
				mlx_put_image_to_window(data.mlx, data.win, data.bg, k, l);
			else
				image_to_window2(data, k, l);
			k += 64;
			data.i++;
		}
		k = 0;
		l += 64;
		data.j++;
	}
}
