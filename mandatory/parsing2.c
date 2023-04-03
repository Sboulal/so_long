/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:48:54 by saboulal          #+#    #+#             */
/*   Updated: 2023/04/03 13:52:19 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_ext(char *str, char *search)
{	int	len_1;
	int	len_2;

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
char	*map_check_is_valid(char *file_name)
{
	int			fd;
	static char	*str;
	char		*line;

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
int	find_player(t_data *data)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	p = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
			{
				p++;
				data->i = i;
				data->j = j;
			}
			j++;
		}
		i++;
	}
	return (p);
}

int	find_exit(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (ft_strchr_1(map[i], 'E') == 1)
			return (0);
		i++;
	}
	return (1);
}
