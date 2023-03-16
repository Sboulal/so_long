/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/14 15:56:56 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*calcul width and highy*/
void init_h_w_map(t_data *data)
{
    int i = 0;
    data->w_map = 0;
    data->h_map = 0;
    data->w_map = ft_strlen(&data->map[0]);
    while (data->map_split[i])
        i++;
    data->h_map = i;
}

int main(int argc,char **argv)
{
    char *str;
    char **map; 
  
    if (argc != 2)
        return(write(1,"Invalid argument",16),0);
    if(check_ext(argv[1],".ber") || ft_strlen(argv[1]) < 5)
            return(write(1,"Is Not Valid Extension ",23),1);
    str = map_check_is_valid(argv[1]);
    map = ft_split(str,'\n');
    Check_CEP(map);
    ft_rectangular_map(map);
    ft_check_walls(map);
    check_carct(map);
    ft_wind();
   return (0);
} 
