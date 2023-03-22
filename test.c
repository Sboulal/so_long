/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:21:25 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/22 14:42:16 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h" 


	int		i;
	int		j;

	i = -1;
	while (my_mlx_img.map[++i])
	{
		j = -1;
		while (my_mlx_img.map[i][++j])
		{
			if (my_mlx_img.map[i][j] == '1')
				mlx_put_image_to_window(my_mlx_img.mlx, my_mlx_img.win, \
										my_mlx_img.img_1, j * 64, i * 64);
			else if (my_mlx_img.map[i][j] == 'C')
				mlx_put_image_to_window(my_mlx_img.mlx, my_mlx_img.win, \
										my_mlx_img.img_c, j * 64, i * 64);
			else if (my_mlx_img.map[i][j] == 'E')
				mlx_put_image_to_window(my_mlx_img.mlx, my_mlx_img.win, \
										my_mlx_img.img_e, j * 64, i * 64);
			else if (my_mlx_img.map[i][j] == 'P')
				mlx_put_image_to_window(my_mlx_img.mlx, my_mlx_img.win, \
										my_mlx_img.img_p, j * 64, i * 64);
		}
	}

int	main(void)
{
	void	*mlx;
    void    *win;
	void	*img;
	char	*relative_path = "images.xpm";
	int		img_width;
	int		img_height;

	mlx = mlx_init();
    win = mlx_new_window(mlx, 100 * 10, 50 * 10, "Hello world!");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
    mlx_put_image_to_window(mlx, win, img, 150, 150);
    mlx_put_image_to_window(mlx,win, img, 150, 214);
    mlx_put_image_to_window(mlx, win, img, 214, 150);
    mlx_put_image_to_window(mlx,win, img, 214, 214);
    mlx_loop(mlx);
}