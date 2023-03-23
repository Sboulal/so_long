/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:28:20 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/23 16:23:01 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

 
int	key_hook(int keycode, t_data *data)
{
    (void)keycode;
    (void) data;
	printf("Hello from key_hook!\n");
	return (0);
}
void ft_wind(t_data data)
{
    data.x = x_for_s(data.map);
    data.y = y_for_s(data.map);
    data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, (data.x) * 64, (data.y) * 64, "so_long");
  
    printf("start\n");
    init_img(&data);
    image_to_window(data);
    printf("end\n");
    // imp_image2(data);
	mlx_key_hook(data.win, key_hook, &data);
	mlx_loop(data.mlx);
   
}
