/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/01 18:30:13 by saboulal         ###   ########.fr       */
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
    
    
    // if(find_PLAYER(str) &&find_EXIT(str)&&find_COLLECTIBLES(str)&&find_ZERO(str))
    //     write(1,"Map  valid \n",13);
    // else
    //     write(1,"Map not  valid \n",17);
    
    /**khalid*/
    // t_data data;
   
    // data.map = map_check_is_valid(argv[1]);
    // init_h_w_map(&data);
    // printf("%s\n", data.map);
    // printf("h =%d\n", data.h_map);
    // printf("w = %d\n", data.w_map);
    
    // printf("\nw = %d\n",data->w_img);
    // printf("h = %d\n",data->h_img);
    /****/
 /*For rectangular and New line */
 
    return (0);
} 