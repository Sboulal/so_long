/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:28:20 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/22 14:57:12 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void ft_wind(t_data *data)
{
    data->x = x_for_s(data->map);
    data->y = y_for_s(data->map);
	data->mlx = mlx_init();
    data->win = mlx_new_window(data->mlx,100, 50, "so_long");
	init_img(data);
    mlx_hook(data->win,,,);
    mlx_hook(data->win,,,);
    mlx_loop(data->mlx);
}
