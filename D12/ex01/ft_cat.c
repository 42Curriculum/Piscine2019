/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:27:21 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/25 22:20:09 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#define BUFF_SIZE 2800

char	*g_file;

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != 0)
	{
		c = (str[i]);
		write(1, &c, 1);
		i++;
	}
}

char	*mk_str(char *str, char *name)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		name[i] = str[i];
		i++;
	}
	return (name);
}

void	check_error(void)
{
	int		i;
	char	buffer[BUFF_SIZE + 1];

	while ((i = read(0, buffer, BUFF_SIZE)) > 0)
	{
		buffer[i] = '\0';
		ft_putstr(buffer);
	}
	return ;
}

void	fileread(char *buffer, int fd)
{
	int i;
	int errno;

	if (read(fd, buffer, 1) == -1)
	{
		if (errno == 21)
			write(2, "Is a directory", 15);
		else if (errno == 1)
			write(2, "No such file or directory", 26);
	}
	i = read(fd, buffer, BUFF_SIZE);
	buffer[i] = '\0';
	ft_putstr(buffer);
	close(fd);
}

int		main(int argc, char **argv)
{
	int		n;
	int		fd;
	char	buffer[BUFF_SIZE + 1];

	n = 1;
	if (argc == 1)
		check_error();
	while (n != argc)
	{
		g_file = argv[n];
		g_file = mk_str(argv[n], g_file);
		fd = open(g_file, O_RDONLY);
		if (fd != -1)
			fileread(buffer, fd);
		if (argv[n][0] == '-')
			check_error();
		n++;
	}
	return (0);
}
