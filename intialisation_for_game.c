/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intialisation_for_game.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:42:11 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/22 14:50:57 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int get_collectibles(char **map)
{
    int i;
    int C;

   i = 0;
   
  while(map[i])
   {
    while (map[i][j])
    {
      
       if(map[i][j] == 'C')
          C++;
      j++;
    }
    i++;
   } 
   return(C);
}

int x_for_s(char **str)
{
   int i;
   i = 0;
   while (str[0] && str[0][i])
      i++;
   return(i - 1);
}

int y_for_s(char **str)
{
   int i;
   i = 0;
   while (str[i])
      i++;
   return(i);
}

   data->x = x_for_s(data->map);
   data->y = y_for_s(data->map);
