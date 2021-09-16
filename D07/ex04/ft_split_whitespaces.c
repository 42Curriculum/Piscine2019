/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:27:23 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 23:39:29 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		spaces(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		len(int index, char *str)
{
	int		i;

	i = index;
	while (!(spaces(str[index])))
	{
		index++;
	}
	return (index - i);
}

int		wordct(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (spaces(str[i]))
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ar;
	int		i;
	int		n;
	int		k;

	i = 0;
	n = 0;
	ar = malloc(wordct(str));
	while (str[n])
	{
		k = 1;
		while (spaces(str[n]))
			n++;
		ar[i] = (char *)malloc(sizeof(char) * ((len(n, str) + 1)));
		while (!(spaces(str[n])))
		{
			ar[i][k - 1] = str[n++];
			k++;
		}
		ar[i++][k - 1] = '\0';
	}
	ar[i] = 0;
	return (ar);
}
