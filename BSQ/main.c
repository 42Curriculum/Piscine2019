/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 21:18:46 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/31 23:33:47 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "ft_list.h"
#define BUFFER_SIZE 100000

void	error_msg(void)
{
	write(2, "map error\n", 10);
}

void	bsq(char *str)
{
	t_point winner;

	g_map = make_array(str, 0, 0, 0);
	free(str);
	winner = g_map[0][0];
	winner = find_square(g_map, winner, 0, 0);
	write_x(g_map, winner, g_info.full);
	map_output_x(g_map, g_info.lno);
}

char	*read_map(int fd, char *str)
{
	char	buffer[BUFFER_SIZE + 1];
	int		b;

	while ((b = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[b] = '\0';
		str = ft_mk_str(str, buffer);
	}
	return (str);
}

int		norm_helper(int fd, char *str)
{
	str = read_map(fd, str);
	if (error_check(str) != 0)
	{
		error_msg();
		write(1, "\n", 1);
		return (1);
	}
	bsq(str);
	return (0);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i != argc)
		{
			str = "";
			if (norm_helper(open(argv[i], O_RDONLY), str) == 0)
			{
				write(1, "\n", 1);
			}
			i++;
		}
	}
	else
	{
		str = "";
		if (norm_helper(open(argv[i], O_RDONLY), str) != 0)
			return (0);
	}
	return (0);
}
