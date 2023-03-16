/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:15 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/14 15:35:30 by saboulal         ###   ########.fr       */
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
// # define W 13
// # define S 1
// # define A 0
// # define D 2
// # define  right 124
// # define  left  123
// # define  up   126
// # define  down 125
// # define  esc 53
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
int ft_strchr_1(char *str,int c);
char *ft_strstr(char *str, char *to_find);
char	**ft_split(char  *s, char c);
char	*ft_search(const char *str, int search);
/*Function Parsing*/
int check_ext(char *str, char *search);
int check_content_map(char *str);
char *map_check_is_valid(char *file_name);
int Find_EXIT(char **map);
int Find_COLLECTIBLES(char **map);
int Find_PLAYER(char **map);
void Check_CEP(char **map);
void ft_rectangular_map(char **map);
void ft_check_walls(char **map);
void check_carct(char **map);
int search_car(char *str);
// void check_carct(char **map);
// void ft_mp_check(char **map);
void ft_wind();
#endif