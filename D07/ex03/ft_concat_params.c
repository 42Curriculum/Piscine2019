/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:53:57 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 23:15:58 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_l(char **str)
{
	int i;
	int n;
	int l;

	i = 0;
	n = 0;
	l = 0;
	while (str[i] != '\0')
	{
		while (str[i][n] != '\0')
		{
			n++;
			l++;
		}
		i++;
		l++;
		n = 0;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ar;
	int		i;
	int		n;
	int		l;

	i = 1;
	l = 0;
	ar = (char *)malloc(sizeof(argv) * ((str_l(argv)) + argc));
	while (argv[i] != '\0')
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			ar[l] = argv[i][n++];
			l++;
		}
		i++;
		ar[l] = '\n';
		l++;
	}
	return (ar);
}
