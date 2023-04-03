/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:12:49 by saboulal          #+#    #+#             */
/*   Updated: 2023/03/27 14:37:21 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putnbr_fd(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd ('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd ((n / 10));
		ft_putnbr_fd ((n % 10));
	}
	else
	{
		ft_putchar_fd ((n + '0'));
	}
}
