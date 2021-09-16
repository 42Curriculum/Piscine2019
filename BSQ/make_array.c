/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:29:42 by slee              #+#    #+#             */
/*   Updated: 2019/07/31 22:03:23 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			map_init(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

void		init_open(char *str, int i, int n, int k)
{
	g_map[i][n].value = 1;
	g_map[i][n].c = str[k];
	g_map[i][n].x = i;
	g_map[i][n].y = n;
}

void		init_other(char *str, int i, int n, int k)
{
	g_map[i][n].value = 0;
	g_map[i][n].c = str[k];
	g_map[i][n].x = i;
	g_map[i][n].y = n;
}

t_point		**make_array(char *str, int i, int n, int k)
{
	int		offset;

	offset = map_init(str);
	while (i++ <= offset)
		str++;
	i = 0;
	g_map = (t_point **)malloc((sizeof(t_point *) * (g_info.width + 1)) + 1);
	while (i <= g_info.width)
	{
		g_map[i] = (t_point *)malloc((sizeof(t_point) * (g_info.lno + 1)) + 1);
		n = 0;
		k = i;
		while (n <= g_info.lno)
		{
			if (str[k] == g_info.empty)
				init_open(str, i, n, k);
			else
				init_other(str, i, n, k);
			k += (g_info.width + 1);
			n++;
		}
		i++;
	}
	g_map[i] = NULL;
	return (g_map);
}
