/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_check_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:52:31 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/04 17:17:25 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_rectangular_map(char  **map)
{
    int i;
    
    i = 0;
    
    while(map[i]!= NULL)
    {
         
        if(ft_strlen(map[i])!= ft_strlen(map[0]))
        {
          return(0);
        }
       i++;
    }
    return(1);
}