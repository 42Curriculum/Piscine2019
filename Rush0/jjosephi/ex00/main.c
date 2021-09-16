/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 18:55:07 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/29 15:28:47 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chocolatine.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 42

char	*mk_str(char *str, char *str2)
{
	int		i;
	int		n;
	char	*ar;

	ar = (char*)malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(str2)) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	n = 0;
	while (str2[n] != '\0')
	{
		ar[i] = str2[n];
		i++;
		n++;
	}
	str[i] = '\0';
	return (ar);
}

int		main(void)
{
	int		b;
	int		j;
	char	buffer[BUFFER_SIZE + 1];
	char	*str;

	j = 0;
	b = 0;
	str = (char*)malloc(5000);
	while ((b = read(STDIN_FILENO, buffer, BUFFER_SIZE)))
	{
		buffer[b] = '\0';
		str = mk_str(str, buffer);
	}
	printf("\n%s\n", str);
	p_rush_check(str);
	return (0);
}
