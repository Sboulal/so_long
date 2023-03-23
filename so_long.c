/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/23 16:22:18 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*calcul width and highy*/
// void init_h_w_map(t_data *data)
// {
//     int i = 0;
//     data->w_map = 0;
//     data->h_map = 0;
//     data->w_map = ft_strlen(&data->map[0]);
//     while (data->map_split[i])
//         i++;
//     data->h_map = i;
// }

//  int for_macro(int keycode , char **map)
//  {
//       if( keycode == esc)
//            ft_close();
//       if(keycode == right)
//             ft_right();
//       if(keycode == left)
//             ft_left();
//       if(keycode == up)
//           ft_up();
//  }

int main(int argc,char **argv)
{
    t_data data;
    // char **map;
    char *str;
   
    if (argc != 2)
        return(write(1,"Invalid argument",16),0);
    if(check_ext(argv[1],".ber") || ft_strlen(argv[1]) < 5)
            return(write(1,"Is Not Valid Extension ",23),1);
    str = map_check_is_valid(argv[1]);
   data.map = ft_split(str,'\n');
    if(data.map == NULL)
     {
        write(1,"MAP NOT HERE",12);
        exit(0);
     }
    Check_CEP(data.map);
    ft_rectangular_map(data.map);
    ft_check_walls(data.map);
    ft_wind(data);
   return (0);
} 