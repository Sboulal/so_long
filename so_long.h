/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:15 by saboulal          #+#    #+#             */
/*   Updated: 2023/02/26 19:51:07 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG
# define SO_LONG
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

/*Function For Help*/ 
int	ft_strlen(char *str);
int	ft_strncmp(const char *f, const char *s, int len);
char	*ft_strjoin(char *left_str, char *buff);
char	*get_next_line(int fd);
int	ft_strchr(char *str);
char	*ft_strstr(char *str, char *to_find);

/*Function Parsing*/ 
int check_ext(char *str, char* search);
char *map_check_is_valid(char *file_name);
int check_content_map(char *str);
char *map_check_is_valid(char *file_name);
int find_EXIT(char *map);
int find_COLLECTIBLES(char *map);
int find_PLAYER(char *map);
int find_ZERO(char *map);
int Other_char(char *map);


#endif
