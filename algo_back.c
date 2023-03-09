/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:44:27 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/08 15:32:10 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

/*working in Backtracing .....*/

int ft_back_map(char **map)
{
    int i;

    i = 0;
    while (map[i])
    {
        if(map[i] == 1 && map[i +1]== 'P' && map[i +2] == 1)  
                    write(1,"error",5);
        i++;
    }
    return (0);
}

int ft_copy_map(char **map)
{
    
}