/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:55:43 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/31 23:12:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		lencheck(char *str, int offset)
{
	int i;

	i = offset;
	while (str[i])
	{
		i++;
	}
	if (g_info.lno == 0)
		return (1);
	g_info.width = ((i - map_init(str)) / g_info.lno) - 1;
	return (0);
}

int		size_check(char *str, int offset, int lines, int linelen)
{
	int i;

	i = offset + 1;
	while (str[i] != '\0')
	{
		linelen = 0;
		while (str[i] != '\n')
		{
			if (str[i] != g_info.obstacle && str[i] != g_info.empty)
				return (1);
			i++;
			linelen++;
		}
		if (str[i] == '\n')
		{
			lines++;
			if (linelen != g_info.width)
				return (1);
		}
		i++;
	}
	g_info.size = (i - offset - 1);
	if (lines != g_info.lno)
		return (1);
	return (0);
}

int		error_check(char *str)
{
	int i;
	int lines;
	int linelen;

	g_info.width = 0;
	g_info.size = 0;
	g_info.lno = 0;
	lines = 0;
	linelen = 0;
	if ((i = first_line(str)) == 0)
		return (1);
	else if (lencheck(str, i) != 0)
		return (1);
	else if (size_check(str, i, lines, linelen) != 0)
		return (1);
	return (0);
}

int		first_line(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		g_info.lno = char_atoi(str[i]) + (g_info.lno * 10);
		i++;
	}
	if (str[i + 3] != '\n')
		return (0);
	g_info.full = str[i + 2];
	g_info.obstacle = str[i + 1];
	g_info.empty = str[i];
	return (i + 3);
}
