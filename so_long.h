/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:15 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/02 17:28:10 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG
#define SO_LONG
/*For getnextline*/
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif
/*end get*/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>
typedef struct mlx_lib
{
    void *mlx;
    void *win;
    char **map_split;
    char *map;

    void *wall;
    void *player;
    void *bg;
    void *exit;
    void *img;
    int w_img;
    int h_img;
     int w_map;
    int h_map;
} t_data;

/*Function For Help*/
int ft_strlen(char *str);
int ft_strncmp(const char *f, const char *s, int len);
char *ft_strjoin(char *left_str, char *buff);
char *get_next_line(int fd);
int ft_strchr(char *str);
char *ft_strstr(char *str, char *to_find);
char	**ft_split(char  *s, char c);
/*Function Parsing*/
int check_ext(char *str, char *search);
// char *map_check_is_valid(char *file_name);

int check_content_map(char *str);
char *map_check_is_valid(char *file_name);
int find_EXIT(char *map);
int find_COLLECTIBLES(char *map);
int find_PLAYER(char *map);
int find_ZERO(char *map);
// int find_new_line(char *map);
// void Other_char(char *map);
int ft_search(const char *str, int search);

// void ft_check_map(char **map);
// void check_is_rec(char **map);
void ft_rectangular_map(char **map);
void ft_wind();
#endif