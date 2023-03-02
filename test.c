/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:21:25 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/02 18:05:44 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h" 


int main(int ac , char **av)
{
    
    t_data *data;
    int     w;
    int     h;


	data->mlx = mlx_init();
    data->wall = mlx_xpm_file_to_image(mlx ,"wall.xpm", &w , &h);
	data->map = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    mlx_put_image_to_window(mlx, mlx_win, img, 150, 150);
    mlx_put_image_to_window(mlx, mlx_win, img, 150, 214);
    mlx_put_image_to_window(mlx, mlx_win, img, 214, 150);
    mlx_put_image_to_window(mlx, mlx_win, img, 214, 214);
    mlx_loop(mlx);

    return 0;
}
