# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 15:31:56 by jjosephi          #+#    #+#              #
#    Updated: 2019/07/23 20:20:27 by jjosephi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
CFILES = ft_atoi.c ft_putchar.c ft_putnbr.c ft_strlen.c \
	main.c operations.c
HFILES = /includes
LIB = libft.a

all : $(LIB)

$(LIB) :
	gcc $(FLAGS) $(CFILES)

clean :
	rm *.o