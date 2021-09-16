# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/30 14:56:51 by slee              #+#    #+#              #
#    Updated: 2019/07/31 21:24:41 by jjosephi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c str_helper.c make_array.c find_square.c map_output.c error_check.c char_int_helper.c

HDR = ft_list.h

all :
	gcc -g -Wall -Wextra -Werror $(SRC) -I $(HDR) -o $(NAME)

clean :
	/bin/rm -f $(NAME)
	

fclean : clean
	/bin/rm -f $(NAME)
	
re: clean all
