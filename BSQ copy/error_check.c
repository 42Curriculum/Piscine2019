/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:55:43 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/29 21:26:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
int     size(char *str)
{
	return(ft_strlen(str));
}

int	charcheck(char *str, char empty, char obstacle)
{
	int i;
	
	while(str[i])
	{
		if (str[i] == empty || str[i] == obstacle)
			i++;
		else
			return(1);
	}
	return(0);
}

int	lencheck(char *str, int size, int lno)
{
	int i;
	int len;
	int line;
	int width;

	width = size/lno;
	i = 0;
	line = 0;
	if (str[0] == NULL)
		return(1);
	while (str[i])
	{
		len = 0;
		while (str[i] != '\n')
		{
			i++;
			len++;
		}
		if (str[i] == '\n')
		{
			line++;
			if (len != width)
				return (1);
		}
		i++;
	}
	if (line != lno)
		return (1);
	return (0);
}

int *arr_to_int(char *str, char empty, char obstacle, int size)
{
	int i ;
	int *array;
	
	i = 0;
	array = (int)malloc(sizeof(int) * size);
	while (str[i])
	{
		if(str[i] == empty)
		{
			array[i] = 1;
			i++;
		}
		else if(str[i] == obstacle)
		{
			array = 0;
			i++;
		}
		
	}
	return(array);
}

