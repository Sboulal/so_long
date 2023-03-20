/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:10:27 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/20 14:24:09 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void ft_close(t_data *mw)
{
   mlx_destroy_window(mw->mlx,mw->win);
   return ;
}

void ft_right(t_data *data)
{
   data->i = 0;
   data->j=0;
   if (data->map[data->i][data->j + 1] == '0')
   {
      data->map[data->i][data->j] = 'P';
      data->map[data->i][data->j] = 'C';
      data->j--;
      data->move++;
   }
   else if(data->map[data->i][data->j + 1] == 'P')
   {
      data->j++;
      data->move++;
      data->co--;
          
   }
   else if(data->map[data->i][data->j +1] == 'E')
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
      
   }
}

void ft_left(t_data *data)
{
   if(data->map[data->i][data->j +1] == '0')
   {
      data->map[data->i][data->j] = 'P';
      data->i++;
      data->move++;
      data->co--;
   }
   else if(map[data->i][data ->j +1] == 'C')
   {
      data->j++;
      data->move++;
      data->co--;
   }
   else if(data->map[data-> i][data->j] == 'E' && data->co == 0)
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
   }
}

void ft_down(t_data *data)
{
   if(data->map[data->i][data->j + 1] == '0')
   {
      data->map[data->i][data->j] = 'P';
      data->j--;
      data->move++;
      data->co--;
   }
   else if(data->map[data->i][data->j] == 'C')
   {
      data->j++;
      data->move++;
      data->co--;
   }
   else if(data->map[data->i][data->j] == 'E' && data->co == 0 )
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
   }
}

void ft_up(t_data *data)
{
   if(data->map[data->i][data->j + 1] == '0')
   {
      data->map[data->i][data->j] = 'P';
      data->j--;
      data->move++;
      data->co--;
   }
   else if(data->map[data->i][data->j] == 'C')
   {
      data->j++;
      data->move++;
      data->co--;
   }
   else if(data->map[data->i][data->j] == 'E' && data->co == 0 )
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
   }
}