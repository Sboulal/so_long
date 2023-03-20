/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:08 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/16 10:04:23 by saboulal         ###   ########.fr       */
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
} 

void ft_check_walls(char **map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(map[i])
    {
        if(map[i][0] != '1')
                write(1,"ERROR FOUND",11);
                break;
        i++;
    }
    while(map[j])
    {
          if (map[0][j] != '1')
          {
             write(1,"ERROR FOUND",11);
                break;
          }
               
        j++;   
    }
    i = 0;
    while(map[i])
    {
        j =0;
        if (map[i][j] != '1')
            write(1,"ERROR FOUND",11);
        j++;
    }
}
int search_car(char *str)
{
    int i;
    char c;
  
     str = "10ECP";
     c = '\0';
     i = 0;
    while(str[i])
    {
        if(c == str[i])
             return (1);
        i++;
    }
    return (0);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
void check_carct(char **map)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (map[i])
    {
        while( map[i][j] != '\0')
        {
             if(search_car(map[i]) != 0)
                write(1,"INVALID",7);
            j++;
        }
       i++;
    }
}