/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_util.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:07:49 by saboulal          #+#    #+#             */
/*   Updated: 2023/02/28 13:39:22 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	lenleft;
	size_t	lsbuff;

    if(left_str == NULL)
    {
        left_str = malloc(1);
        left_str[0] = '\0';
    }
	lenleft = ft_strlen(left_str);
	lsbuff = ft_strlen(buff);
	str = (char *) malloc(sizeof(char) * ((lenleft + lsbuff) + 1));
	if (str == NULL)
		return (free(left_str), NULL);
	i = -1;
	j = -1;
	while (++i < lenleft)
		str[i] = left_str[i];
	while (++j < lsbuff)
	{
		str[i] = buff[j];
		i++;
	}
	str[i] = '\0';
	return (free(left_str), str);
}

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*s;

	if (str == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	s = (char *) malloc ((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}