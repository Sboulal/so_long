/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:59:29 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/23 11:32:52 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void init(t_data data)
{
    data.mlx = NULL;
    data.win = NULL;
    data.map_split = NULL;
    data.map  = NULL;
    data.wall =   NULL;
    data.player = NULL;
    data.bg = NULL;
    data.exit =   NULL;
    data.exit_O =   NULL;
    data.collectibles = NULL;
    data.img =  NULL;
     data.w_img = 0;
     data.h_img =  0;
    data.w_map = 0;
     data.h_map = 0;
     data.i = 0;
     data.j = 0;
     data.move = 0;
     data.co = 0;
     data.x = 0; 
     data.y = 0;
}