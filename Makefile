# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 15:06:46 by saboulal          #+#    #+#              #
#    Updated: 2023/04/01 10:25:28 by saboulal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc
 
CFLAGS = -Wall -Wextra -Werror
	
OBJS = 	mandatory/so_long.o \
		mandatory/function_util.o \
		mandatory/parsing.o \
		mandatory/get_next_line.o \
		mandatory/get_next_line_util.o \
		mandatory/other_check_map.o \
		mandatory/ft_split.o \
		mandatory/ft_split_utils.o \
		mandatory/parsing2.o \
		mandatory/ft_window.o \
		mandatory/mlx_images.o \
		mandatory/for_move.o \
		mandatory/algo_back.o \
		mandatory/initialisation_for_game.o \

OBJS_BONUS =  bonus/so_long.o \
			  bonus/function_util.o \
			  bonus/parsing.o \
			  bonus/get_next_line.o \
			  bonus/get_next_line_util.o \
			  bonus/other_check_map.o \
			  bonus/ft_split.o \
			  bonus/ft_split_utils.o \
			  bonus/parsing2.o \
			  bonus/ft_window.o \
		      bonus/mlx_images.o \
			  bonus/for_move.o \
			  bonus/algo_back.o \
			  bonus/initialisation_for_game.o \

RM = rm -f 
 
all : $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

mandatory/%.o: mandatory/%.c mandatory/so_long.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all 