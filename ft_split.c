/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:06:12 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/01 18:01:59 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"
size_t	ft_strlcpy(char *dest,  char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = ft_strlen(src);
	if (size == 0)
		return (x);
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (x);
}

static char	*ft_strdup( char	*str)
{
	int		i;
	int		len;
	char	*s;

	i = 0;
	len = ft_strlen(str);
	s = malloc (len + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, str, len + 1);
	return (s);
}
char	*ft_substr(char  *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_strlen(s);
	if (start > count)
		return (ft_strdup(""));
	if (count <= start + len)
		len = count - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

static void	*tabfree(char **tab)
{
	size_t	j;

	j = 0;
	while (tab[j])
		free(tab[j++]);
	free(tab);
	return (NULL);
}

static int	words(char *str, char c)
{
	int		i;
	int		j;
 
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] && str[i] != c)
		{
			i++;
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

static char	**alloc_fill( char *s, int start, int end, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **) malloc((words(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (i < words(s, c) && s[start])
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		tab[i] = ft_substr(s, start, end - start);
		if (!tab[i])
		{
			tabfree(tab);
			return (NULL);
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char  *s, char c)
{
	char	**tab;
	int		start;
	int		end;

	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	tab = alloc_fill(s, start, end, c);
	if (!tab)
		return (NULL);
	return (tab);
}