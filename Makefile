# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 15:06:46 by saboulal          #+#    #+#              #
#    Updated: 2023/03/01 18:23:06 by saboulal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc
 
CFLAGS = -Wall -Wextra -Werror
	
OBJS = so_long.o function_util.o parsing.o get_next_line.o get_next_line_util.o other_check_map.o ft_split.o
 
RM = rm -f 
 
all : $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< 

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all 