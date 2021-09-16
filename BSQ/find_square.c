/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:59:49 by slee              #+#    #+#             */
/*   Updated: 2019/07/31 22:47:06 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_min(int i, int j, int k)
{
	int		res;

	if (i <= j && i <= k)
		res = i;
	else if (j <= k && j <= i)
		res = j;
	else
		res = k;
	return (res);
}

t_point		set_winner(t_point winner, t_point **map, int i, int j)
{
	if (map[i][j].value > winner.value)
		winner = map[i][j];
	else if (map[i][j].value == winner.value)
	{
		if (map[i][j].y < winner.y)
			winner = map[i][j];
		else if (map[i][j].y == winner.y)
		{
			if (map[i][j].x < winner.x)
				winner = map[i][j];
		}
	}
	return (winner);
}

t_point		find_square(t_point **map, t_point winner, int i, int j)
{
	while (i <= g_info.width)
	{
		j = 0;
		while (j <= g_info.lno)
		{
			if (i == 0 || j == 0)
			{
				if (!(map[i][j].value == 0))
					map[i][j].value = 1;
				winner = set_winner(winner, map, i, j);
			}
			else if (map[i][j].value > 0)
			{
				map[i][j].value = (ft_min(map[i][j - 1].value,
				map[i - 1][j].value, map[i - 1][j - 1].value) + 1);
				winner = set_winner(winner, map, i, j);
			}
			else
				map[i][j].value = 0;
			j++;
		}
		i++;
	}
	return (winner);
}
