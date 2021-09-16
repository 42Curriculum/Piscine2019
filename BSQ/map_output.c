/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:52:43 by slee              #+#    #+#             */
/*   Updated: 2019/07/31 22:48:12 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_putstr(char *str)
{
	write(1, str, g_info.size + 1);
}

void		map_output_x(t_point **map, int col)
{
	int		i;
	int		n;
	int		k;
	char	*str;

	i = 0;
	n = 0;
	k = 0;
	str = (char *)malloc((sizeof(char) * g_info.size) + 1);
	while (n < col)
	{
		i = 0;
		while (map[i] != NULL)
		{
			if (map[i][n].c == '\n' || map[i][n].c == '\0')
				str[k] = map[i][n].c;
			else
				str[k] = map[i][n].c;
			k++;
			i++;
		}
		n++;
	}
	str[k] = '\0';
	ft_putstr(str);
}

t_point		**write_x(t_point **map, t_point winner, char full)
{
	int		i;
	int		n;

	i = winner.x;
	winner.c = full;
	while (i != winner.x - winner.value)
	{
		n = winner.y;
		while (n != winner.y - winner.value)
		{
			map[i][n].c = full;
			n--;
		}
		i--;
	}
	return (map);
}
