/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:28:20 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/02 18:35:34 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_wind()
{
   
  t_data mlx;
  // t_data  win;
  t_data img;
  // t_data img_put;
  char *r ="pexels-madison-inouye-1831234.xpm";
  int w;
  int h;
   mlx.mlx = mlx_init();
  //  win.win = mlx_new_window(mlx.mlx,500,600,"so_long");
   img.img = mlx_new_image(mlx.mlx,width.w_img,height.h_img);
  //  mlx_put_image_to_window(mlx.mlx,win.win,img.img,width.w_map,height.h_map);
  img.img = mlx_xpm_file_to_image(mlx.mlx,r,&w,&h);
   mlx_loop(mlx.mlx);
    
}