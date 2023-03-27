/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_check_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:52:31 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/27 12:40:58 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	ft_rectangular_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		if (ft_strlen(map[i]) != ft_strlen(map[0]))
		{	
			write(1, "Check is rect", 13);
			exit(1);
		}
		i++;
	}
}
