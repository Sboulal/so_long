/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_check_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:52:31 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/02 14:37:17 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_rectangular_map(char  **map)
{
    int hight;
    int len_hight;
    int lenght;
    hight = 0;
    len_hight = ft_strlen(map[hight]);
    while(map[hight]!= NULL)
    {
        lenght = ft_strlen(map[hight]);  
        if(len_hight != hight)
           write(1,"INVALID MAP RECT",16);
        hight++;
    }
  
}

// int ft_wall(char **map)
// {
//     int hight;
//     int lenght;

//     hight  =  0;
//     lenght = 0;
//     while(map[hight]!= NULL)
//     {
//         while(map[lenght]!= NULL)
//         {
//             if(map[hight][lenght] == 1)
//                 return(1); 
//           lenght++;
//         }
//         hight++;
//     }
// }

// void check_is_rec(char **map)
// {
//     if (ft_rectangular_map(map) == 0)
//         write(1,"GOOD",4);
//     else
//         write(1,"try again",9);
// }

