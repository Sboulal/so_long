/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:44:27 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 16:15:53 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

/*working in Backtracing .....*/

void	ft_free(char **map)
{
	int	i;

	i = 0;
    while (map[i])
    {
        free(map[i]);
        i++;
    }
    free(map);
}

void flood_fill_map(t_data *data,int i,int j)
{
    if (j >= data->d || j < 0 || i >= data->p || i < 0 || data->copy[i][j] == '1' || data->copy[i][j] == 'X')
      return ;
    if (data->copy[i][j] == 'E')
    {
        data->w_e = 1;
        return;
    }
    data->copy[i][j] = 'X';
   flood_fill_map(data,i - 1,j);
   flood_fill_map(data, i + 1,j);
   flood_fill_map(data,i, j + 1);
   flood_fill_map(data,i , j - 1);
 
}

int place_exit(t_data *data)
{
    int c;
    
    pos_player(data);
    data->copy = ft_copy_map(data->map);
     data->w_e = 0;
    flood_fill_map(data,data->i,data->j);
    c = get_collectibles(data->copy);
    if (c || data->w_e != 1)
        return(1);
    ft_free(data->copy);
    return (0);
}

char **ft_copy_map(char **map)
{
    int i;
    char **cp_map;
    int len;

    
    len = ft_len_map(map);
    cp_map = (char **)malloc(sizeof(char *) * (len + 1));
    if (!cp_map)
        return (NULL);
    i = -1;
    while(map[++i])
        cp_map[i] = ft_strdup_1(map[i]);  
    cp_map[i] = NULL;
    return (cp_map);
}
