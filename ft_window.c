/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:28:20 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/10 17:21:56 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_wind()
{
   
  t_data m;

  int h;
  int w;
  int x;
  int y;
  
  h = 0;
  w = 0;
  x = 10;
  y = 10;
 m.mlx= mlx_init();
 m.win = mlx_new_window(m.mlx,x * 100,y * 50,"so_long");
 m.img = mlx_xpm_file_to_image(m.mlx,"360_F_507496890_lAb2Pes4JPrMOLuOteCvYe0XfHycUKFG.xpm",&w,&h);
 mlx_put_image_to_window(m.mlx,m.win,m.img,x ,y);
 mlx_loop(m.mlx); 
}