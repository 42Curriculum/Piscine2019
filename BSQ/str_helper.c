/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:24:46 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/31 18:19:01 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int		ft_line_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0 && str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_mk_str(char *s1, char *s2)
{
	int		i;
	int		n;
	char	*array;

	array = (char*)malloc(sizeof(char*) * ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	while (s1[i])
	{
		array[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n])
	{
		array[i] = s2[n];
		n++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
