/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:08 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/22 14:22:21 by saboulal         ###   ########.fr       */
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
int Find_PLAYER(char **map)
{
    int i;
    int P;
    i = 0;
    P = 0;
    while(map[i])
    {
        if(ft_strchr_1(map[i],'P') == 1)
        {
            P++;
            return (0);
        }
          
       i++;
    }
  return(P == 1);
}

int Find_EXIT(char **map)
{
    int i = 0;
    while (map[i])
    {
        if (ft_strchr_1(map[i],'E') == 1)
            return (0);
        i++;
    }
    return (1);
}

int Find_COLLECTIBLES(char **map)
{
    int i;
   i = 0;
   while (map[i])
    {
       if(ft_strchr_1(map[i],'C') == 1)
            return(0);
        i++;
    }
    return (1);
}
 
 void Check_CEP(char **map)
{
    int a;

    a = 0;
    if(Find_COLLECTIBLES(map) != 0)
    {   
        write(1,"NOT VALID TRY C!!!!!",19);
         exit(a);
    }
    if(Find_EXIT(map) != 0)
    {
        write(1,"NOT VALID TRY E!!!!!",19);
        exit(a);
    }
    if(Find_PLAYER(map) != 0)
    {
        write(1,"NOT VALID TRY P!!!!!",19);
         exit(a);
    }
    if (check_carct(map) != 0)
    {
        write(1,"INVALID",7);
        exit(0);
    }
} 

void ft_check_walls(char **map)
{
   int i;
   int a;

    i = 0;
    a = ft_len_map(map);
    while (i < ft_strlen(map[0]))
    {
         if(map[0][i] != '1')
             write(1,"WALL WARNING",12);
       i++;
    }
    i = 0;
    while(i < ft_strlen(map[a - 1]))
    {
        if(map[a - 1][i] != '1')
           write(1,"WALL WARNING",12);
        i++;
    }
    i = 0;
    while( i < a)
    {
        if(map[i][ft_strlen(map[i]) - 1] != '1' || map[i][0] != '1')
                   write(1,"WALL WARNING",12);
        i++;
    }
    
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
int check_carct(char **map)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if(map[i][j] != '0' && map[i][j] != '1' &&map[i][j] != 'E' && map[i][j] != 'C' && map[i][j] != 'P')
            {
                return (1);
            }
            j++;
        }
       i++;
    }
    return (0);
}
