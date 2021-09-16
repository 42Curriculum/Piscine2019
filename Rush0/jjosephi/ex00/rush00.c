/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:54:31 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/28 21:20:55 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chocolatine.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int g_i;
char *g_arr;

int		start(int x)
{
	g_arr = to_arr(g_arr, 'o', g_i++, 1);
	g_arr = to_arr(g_arr, '-', g_i, (x - 2));
	g_i = g_i + (x - 2);
	if (x == 1)
	{
		return (0);
	}
	g_arr = to_arr(g_arr, 'o', g_i++, 1);
	return (0);
}

void	ending(int x, int y)
{
	if (y > 1)
	{
		g_arr = to_arr(g_arr, '\n', g_i++, 1);
		g_arr = to_arr(g_arr, 'o', g_i++, 1);
		if (x > 1)
		{
			g_arr = to_arr(g_arr, '-', g_i, (x - 2));
			g_i = g_i + (x - 2);
			g_arr = to_arr(g_arr, 'o', g_i, 1);
		}
	}
}

char	*rush00(int x, int y)
{
	int n;

	n = y;
	g_i = 0;
	g_arr = (char *)malloc(sizeof(char *) * (x * y));
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	start(x);
	while (--n - 1 > 0)
	{
		g_arr = to_arr(g_arr, '\n', g_i++, 1);
		g_arr = to_arr(g_arr, '|', g_i++, 1);
		g_arr = to_arr(g_arr, ' ', g_i, (x - 2));
		g_i = g_i + (x - 2);
		if (x > 1)
		{
			g_arr = to_arr(g_arr, '|', g_i++, 1);
		}
	}
	ending(x, y);
	return (g_arr);
}
