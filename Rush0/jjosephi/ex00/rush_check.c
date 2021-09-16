/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 19:07:53 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/29 14:40:04 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chocolatine.h"
#include <unistd.h>
#include <stdio.h>

char *(*g_f_array[5])(int x, int y);
char *g_rush_name[] = {"Rush00", "Rush01", "Rush02", "Rush03", "Rush04"};

void	define(void)
{
	g_f_array[0] = &rush00;
	g_f_array[1] = &rush01;
	g_f_array[2] = &rush02;
	g_f_array[3] = &rush03;
	g_f_array[4] = &rush04;
}

void	p_rush_check(char *str)
{
	int size;
	int width;
	int len;

	size = ft_strlen(str);
	width = ft_line_len(str);
	len = size / width;
	rush_check(str, width, len);
}

int		rush_check(char *str, int x, int y)
{
	int i;
	int rush;

	define();
	i = 0;
	rush = 0;
	while (i < 4)
	{
		if (ft_strcmp(str, g_f_array[i](x, y)) == 0)
		{
			if (rush == 1)
			{
				write(1, " || ", 5);
			}
			write(1, "[", 1);
			write(1, g_rush_name[i], ft_strlen(g_rush_name[i]));
			write(1, "]", 2);
			write_size(x, y);
			rush = 1;
		}
		i++;
	}
	if (rush == 0)
		write(1, "You thought it was a rush, but it was I, Dio! \n", 47);
	return (0);
}

void	write_size(int x, int y)
{
	write(1, "[", 1);
	ft_putnbr(x);
	write(1, "]", 2);
	write(1, "[", 1);
	ft_putnbr(y);
	write(1, "]", 2);
}
