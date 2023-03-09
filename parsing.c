/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:08 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/09 11:22:20 by saboulal         ###   ########.fr       */
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
    int j;
    int x;
    i = 0;
    j = 0;
    x = 0;
    while (map[i])
    {  
        while(map[i][j])
        {
            j = 0;
             if (map[i][j] == 'P')
                 x++;
          j++;
        }
      i++;
    }
    if(x == 1)
        return(1);
    return (0);
}

int Find_EXIT(char **map)
{
    int i = 0;
    while (map[i])
    {
        if (ft_strchr_1(map[i],'E') == 1)
            return (1);
        i++;
    }
    return (0);
}

int Find_COLLECTIBLES(char **map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (map[i])
    {
       if(ft_strchr_1(map[i],'C') == 1)
            return(1);
        i++;
    }
    return (0);
}
 
void Check_CE(char **map)
{
    int a;

    a = 0;
    if(Find_COLLECTIBLES(map) != 0)
    {
        printf("salma");
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
} 

void ft_check_walls(char **map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(map[i])
    {
        while(map[i][j])
        {
          if (map[i][j] != '1')
                write(1,"ERROR NOT FOUND",15);
           j++;   
        }
        i++;
    }
}