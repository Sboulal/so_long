/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:28:20 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 16:13:54 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	for_macro(int keycode, t_data *data)
{
	if (keycode == ESC)
		ft_close(data);
	if (keycode == 17)
		ft_close(data);
	if (keycode == D || keycode == 124)
		ft_right(data);
	if (keycode == A || keycode == 123)
		ft_left(data);
	if (keycode == W || keycode == 126)
		ft_up(data);
	if (keycode == S || keycode == 125)
		ft_down(data);
	mlx_clear_window(data->mlx, data->win);
	image_to_window(*data);
	return (0);
}

int	exit_close(void)
{
	exit(0);
}

void	ft_wind(t_data data)
{
	data.x = x_for_s(data.map);
	data.y = y_for_s(data.map);
	data.co = get_collectibles(data.map);
	data.mlx = mlx_init();
	if (!mlx_init())
		return (NULL);
	data.win = mlx_new_window(data.mlx, (data.x) * 64,
			(data.y) * 64, "so_long");
	if (!mlx_new_window())
		return (NULL);
	init_img(&data);
	image_to_window(data);
	mlx_hook(data.win, 2, 0, for_macro, &data);
	mlx_hook(data.win, 17, 0, exit_close, NULL);
	mlx_loop(data.mlx);
}
