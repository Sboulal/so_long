/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:10:27 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/24 15:22:32 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void ft_close(t_data *data)
{
   mlx_destroy_window(data->mlx,data->win);
    exit(0);
}

void ft_right(t_data *data)
{
   
   // printf("%d %d",data->i,data->j);
   // exit(1);
  if (data->map[data->i][data->j + 1] == '0' )
   {
      data->map[data->i][data->j + 1] = 'P';
      data->map[data->i][data->j] = '0';
      data->j++;
      data->move++;
      printf(" %d \n" ,data->move);
   }
   else if(data->map[data->i][data->j + 1] == 'C')
   {
      data->map[data->i][data->j + 1] = 'P';
      data->map[data->i][data->j] = '0';
      data->j++;
      data->move++;
      data->co--;
      printf("%d\n" ,data->move);
   }
   else if(data->map[data->i][data->j +1] == 'E' && data->co == 0)
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      exit(0);
   }
   
}

void ft_left(t_data *data)
{
   if(data->map[data->i][data->j - 1] == '0')
   {
      data->map[data->i][data->j - 1] = 'P';
      data->map[data->i][data->j] = '0';
      data->j--;
      data->move++;
    printf(" %d \n" ,data->move);
   }
   else if(data->map[data->i][data ->j -1] == 'C')
   {
      data->map[data->i][data->j - 1] = 'P';
      data->map[data->i][data->j] = '0';
      data->j--;
      data->move++;
      data->co--;
       printf(" %d \n" ,data->move);
   }
   else if(data->map[data-> i][data->j - 1] == 'E' && data->co == 0)
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
   }
}

void ft_down(t_data *data)
{
   if(data->map[data->i + 1][data->j] == '0')
   {
      data->map[data->i + 1][data->j] = 'P';
      data->map[data->i][data->j] = '0';
      data->i++;
      data->move++;
   printf("%d\n",data->move);
   }
   else if(data->map[data->i + 1][data->j] == 'C')
   {
      data->map[data->i + 1][data->j] = 'P';
       data->map[data->i][data->j] = '0';
      data->i++;
      data->move++;
      data->co--;
      printf("%d",data->move);
   }
   else if(data->map[data->i + 1][data->j] == 'E' && data->co == 0 )
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      return ;
   }
}

void ft_up(t_data *data)
{
   
   if(data->map[data->i - 1][data->j] == '0')
   {
     
      data->map[data->i - 1][data->j] = 'P';
      data->map[data->i][data->j] = '0';
      data->i--;
      data->move++;
      printf("%d\n",data->move);
   }
   else if(data->map[data->i -1][data->j] == 'C')
   {
      data->map[data->i - 1][data->j] = 'P';
      data->map[data->i][data->j] = '0';
      data->i--;
      data->move++;
      data->co--;
      printf("%d",data->move);
   }
   else if(data->map[data->i - 1][data->j] == 'E' && data->co == 0 )
   {
      write(1,"GAME FINICH",11);
      mlx_destroy_window(data->mlx,data->win);
      exit(0);
   }
}