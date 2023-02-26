/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:53 by saboulal          #+#    #+#             */
/*   Updated: 2023/02/26 20:02:26 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc,char **argv)
{
    // int i;
    // int j;
    char *str;

    // i =0;
    // j = ft_strlen(argv[1]);
    if (argc != 2)
        return(write(1,"Invalid argument",16),0);
    if(check_ext(argv[1],".ber"))
            return(write(1,"Is Not Valid Extension ",23),1);
    str = map_check_is_valid(argv[1]);
    if(!find_PLAYER(str) &&!find_EXIT(str)&&!find_COLLECTIBLES(str)&&!find_ZERO(str))
        write(1,"Map  valid \n",13);
    else
        write(1,"Map not  valid \n",17);

    if(!Other_char(str))
        write(1,"MAP GOOD",8);
    else
        write(1,"MAP NOT GOOD",12);
      
    return (0);
}