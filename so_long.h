/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:15 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/29 15:12:36 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define W 13
# define S 1
# define A 0
# define D 2
# define ESC 53
/*For getnextline*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
/*end get*/
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <mlx.h>

typedef struct mlx_lib
{
	void	*mlx;
	void	*win;
	char	**map_split;
	char	**map;
	void	*wall;
	void	*player;
	void	*bg;
	void	*exit;
	void	*exit_0;
	void	*collectibles;
	void	*img;
	int		w_img;
	int		h_img;
	int		w_map;
	int		h_map;
	int		i;
	int		j;
	int		move;
	int		co;
	int		x;
	int		y;
}	t_data;

/*Function For Help*/
int		ft_strlen(char *str);
int		ft_strncmp(const char *f, const char *s, int len);
char	*ft_strjoin(char *left_str, char *buff);
char	*get_next_line(int fd);
int		ft_strchr(char *str);
int		ft_strchr_1(char *str, int c);
char	*ft_strstr(char *str, char *to_find);
char	**ft_split(char *s, char c);
char	*ft_search(const char *str, int search);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_len_map(char **map);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char	*ft_strdup_1( char	*str);
char	*ft_substr(char *s, unsigned int start, size_t len);


/*Function Parsing*/
int		check_ext(char *str, char *search);
int		check_content_map(char *str);
char	*map_check_is_valid(char *file_name);
int		find_collectibles(char **map);
int		find_player(t_data *data);
int		find_exit(char **map);
void	check_cep(t_data *data);
void	ft_rectangular_map(char **map);
void	ft_check_walls(char **map);
int		check_carct(char **map);
int		search_car(char *str);
int		palce_x(char **map);
char 	*ft_copy_map(char **map);
void	flood_fill_map(char **map,int i,int j);
void ft_free(char **map);


/*Function for minilibix*/

void	init_img(t_data *data);
int		x_for_s(char **str);
int		y_for_s(char **str);
int		get_collectibles(char **map);
void	init(t_data data);
void	ft_wind(t_data data);
void	image_to_window(t_data data);
void	image_to_window2(t_data data, int k, int l);
/*Function for movement*/
void	ft_close(t_data *data);
void	ft_right(t_data *data);
void	ft_left(t_data *data);
void	ft_down(t_data *data);
void	ft_up(t_data *data);

/*Function Backtracking*/

#endif
