# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 15:31:56 by jjosephi          #+#    #+#              #
#    Updated: 2019/07/24 14:08:49 by jjosephi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
COMANDS = -c -I
CFILES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c ./srcs/ft_swap.c
HFILES = /includes
LIB = libft.a

all : $(LIB)

$(LIB) :
	gcc $(FLAGS) $(COMANDS)$(HFILES) $(CFILES)
	ar rc $(LIB) *.o

clean :
	rm *.o

fclean : clean
	rm -rf $(LIB)
	
re : fclean all