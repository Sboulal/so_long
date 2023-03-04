/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:08 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/04 17:44:45 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*for extension*/
int check_ext(char *str, char *search)
{
    int len_1;
    int len_2;

    len_1 = ft_strlen(str);
    len_2 = ft_strlen(search);
    while (len_1 > len_2)
    {
        str++;
        len_1--;
    }
    return (ft_strncmp(str, search, len_1));
}

/*check map is here or not */
char *map_check_is_valid(char *file_name)
{
    int fd;
    static char *str;
   
    char *line;
    
    fd = open(file_name, O_RDONLY);
    line = get_next_line(fd);
    while (line)
    {
        str = ft_strjoin(str, line);
        line = get_next_line(fd);
        free(line);
    }
    return (str);
}

/*check  components*/
int find_PLAYER(char **map)
{
    int i;
    int j;

    i =0;
    j =0;
    while (map[i])
    {  
        while(map[j])
        {
             if (map[i][j] == (char*)'P')
            return (1);
          j++;
        }
      i++;
    }
    return (0);
}

int find_EXIT(char **map)
{
    int i = 0;
    while (map[i])
    {
        if (map[i] == (char*)'E')
            return (1);
        i++;
    }
    return (0);
}

int find_COLLECTIBLES(char **map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (map[i])
    {
        while(map[j])
        {
            if (map[i][j] == (char*)'C')
            return (1);
          j++;
        }
        
        i++;
    }
    return (0);
}

int find_ZERO(char **map)
{
    int i = 0;
    while (map[i])
    {
        if (map[i] == (char*)'0')
            return (1);
        i++;
    }
    return (0);
}