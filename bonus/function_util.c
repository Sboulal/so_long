/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:01:12 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/27 14:40:40 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strncmp(const char *f, const char *s, int len)
{
	int	i;

	i = 0;
	if ((!f || !s) && !len)
		return (0);
	while ((f[i] || s[i]) && i < len)
	{
		if (f[i] != s[i])
			return ((unsigned char )f[i] - (unsigned char )s[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_search(const char *str, int search)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = (char *)str;
	while (s[i] != (char)search && s[i])
	{
		i++;
	}
	if (s[i] == (char)search)
	{
		return (&s[i]);
	}
	return (0);
}

int	ft_strchr_1(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_len_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}
