/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 15:54:26 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;
	char	*str;

	if (argc != 2)
		return (write(1, "Invalid argument", 16), 0);
	if (check_ext(argv[1], ".ber") || ft_strlen(argv[1]) < 5)
		return (write(1, "Is Not Valid Extension ", 23), 1);
	str = map_check_is_valid(argv[1]);
	data.map = ft_split(str, '\n');
	if (data.map == NULL)
	{
		write(1, "MAP NOT HERE", 12);
		exit(1);
	}
	check_cep(&data);
	ft_rectangular_map(&data);
	ft_check_walls(data.map);
	if (place_exit(&data))
	{
		write(1, "E R R O R P A T H ", 18);
		exit(1);
	}
	ft_wind(data);
	return (0);
}
