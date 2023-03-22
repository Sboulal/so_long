/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:16:07 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/22 16:28:10 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void init_img(t_data *data)
{
    data->w_img = 0;
    data->h_img = 0;
    
    data->wall= mlx_xpm_file_to_image(data->mlx,"imagesxpm/Wall.xpm",data->w_img,data->h_img);
    data->player = mlx_xpm_file_to_image(data->mlx,"imagesxpm/Player.xpm",data->w_img,data->h_img);
    data->exit = mlx_xpm_file_to_image(data->mlx,"imagesxpm/Exit.xpm",data->w_img,data->h_img);
    data->exit_O= mlx_xpm_file_to_image(data->mlx,"imagesxpm/Exit1.xpm",data->w_img,data->h_img);
    data->collectibles= mlx_xpm_file_to_image(data->mlx,"imagesxpm/bitcoina.xpm",data->w_img,data->h_img);
}

void imp_image(t_data data)
{
    int i;
    int j;

    i = 0;
    while(data.map[i])
    {
        j = 0;
        while(data.map[i][j])
        {
            if(data.map[i][j] == '1')
                mlx_put_image_to_window(data.mlx,data.win,data.img ,j * 64 ,i * 64);
            else if(data.map[i][j] == 'E')
                mlx_put_image_to_window(data.mlx,data.win,data.img ,j * 64 ,i * 64);
            else if(data.map[i][j] == 'P')
                mlx_put_image_to_window(data.mlx,data.win,data.img ,j * 64 ,i * 64);
            else if(data.map[i][j] == 'C')
                mlx_put_image_to_window(data.mlx,data.win,data.img ,j * 64 ,i * 64);
          j++;
        }
        i++;
    }
}