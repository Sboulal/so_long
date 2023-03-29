/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:44:27 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/29 15:45:14 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

/*working in Backtracing .....*/

void ft_free(char ** map)
{
    int i;

    i = 0;
    while(map[i] == NULL)
    {
        free(map);
        i++;
    }
}
void flood_fill_map(char **map,int i,int j)
{
    if(map[i][j] == '0' || map[i][j] == 'P' || map[i][j] == 'C')
          map[i][j] = 'X';
     if(map[i][j] == '1' || map[i][j] == 'E')
            return(0);
   flood_fill_map(map,i,j);
   flood_fill_map(map, i + 1,j);
   flood_fill_map(map,i, j + 1);
   flood_fill_map(i , j - 1);
 
}

int palce_x(char **map)
{
    char **cp_map;
    t_data data;
    int c;
    int e;

    e = 1;
    cp_map = ft_copy_map(map);
    flood_fill_map(cp_map ,data.i,data.j);
    c = get_collectibles(map);
    if(find_exit(map))
        e = 0;
    ft_free(cp_map);
    if(c == 0 || e == 0)
        return (0);
    return (1);
}

char *ft_copy_map(char **map)
{
    int i;
    char *cp_map;
    int len;

    i = 0;
    len = ft_len_map(map);
    cp_map = malloc((len + 1) * sizeof(char *));
    if( cp_map == NULL)
        return (free(cp_map),0);
    while(map[i] != NULL)
    {
        cp_map[i] = map[i];  
        i++; 
    }
    cp_map[i] = NULL;
    return (cp_map);
}
