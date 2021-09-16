/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:59:43 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/25 13:31:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 4200

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

int		check_error(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.", 19);
		write(2, "\n", 2);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 20);
		write(2, "\n", 2);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*file;
	char	buffer[BUFF_SIZE + 1];

	if (argc != 2)
	{
		check_error(argc);
		return (1);
	}
	ft_strlen(argv[1]);
	file = argv[1];
	file = mk_str(argv[1], file);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	i = read(fd, buffer, BUFF_SIZE);
	buffer[i] = '\0';
	ft_putstr(buffer);
	write(1, "\n", 2);
	close(fd);
}
