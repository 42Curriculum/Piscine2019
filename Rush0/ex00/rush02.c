/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:00:38 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/28 21:20:04 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chocolatine.h"
#include <stdlib.h>
#include <stdio.h>

int g_i;
char *g_arr;

int		start2(int x)
{
	g_arr = to_arr(g_arr, 'A', g_i++, 1);
	g_arr = to_arr(g_arr, 'B', g_i, (x - 2));
	g_i = g_i + (x - 2);
	if (x == 1)
	{
		return (0);
	}
	g_arr = to_arr(g_arr, 'A', g_i++, 1);
	return (0);
}

void	ending2(int x, int y)
{
	if (y > 1)
	{
		g_arr = to_arr(g_arr, '\n', g_i++, 1);
		g_arr = to_arr(g_arr, 'C', g_i++, 1);
		if (x > 1)
		{
			g_arr = to_arr(g_arr, 'B', g_i, (x - 2));
			g_i = g_i + (x - 2);
			g_arr = to_arr(g_arr, 'C', g_i, 1);
		}
	}
}

char	*rush02(int x, int y)
{
	int n;

	n = y;
	g_i = 0;
	g_arr = (char *)malloc(sizeof(char *) * (x * y));
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	start2(x);
	while (--n - 1 > 0)
	{
		g_arr = to_arr(g_arr, '\n', g_i++, 1);
		g_arr = to_arr(g_arr, 'B', g_i++, 1);
		g_arr = to_arr(g_arr, ' ', g_i, (x - 2));
		g_i = g_i + (x - 2);
		if (x > 1)
		{
			g_arr = to_arr(g_arr, 'B', g_i++, 1);
		}
	}
	ending2(x, y);
	return (g_arr);
}
