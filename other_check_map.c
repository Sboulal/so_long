/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_check_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:52:31 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/24 10:26:05 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void  ft_rectangular_map(char **map)
{
    int i;
    
    i = 0;
    
    while(map[i]!= NULL)
    {
         
        if(ft_strlen(map[i]) != ft_strlen(map[0]))
        {
            write(1,"Check is rect",13);
            exit(0);
        }
          i++;
    }
}

// void	get_position(char **map, char c)
// {
// 	int		i;
// 	int		j;
// 	int		size;
//     t_data  *data;

// 	i = -1;
// 	size = get_map_size(map);
// 	while (++i < size)
// 	{
// 		j = -1;
// 		while (map[i][++j])
// 		{
// 			if (map[i][j] == c)
// 			{
// 				data->x = i;
// 				data->y = j;
// 			}
// 		}
// 	}
// }