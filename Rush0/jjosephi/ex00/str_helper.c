/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:24:46 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/28 21:41:14 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "chocolatine.h"

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

char	*to_arr(char *arr, char c, int i, int x)
{
	int count;

	count = 0;
	while (x > count)
	{
		arr[i] = c;
		i++;
		count++;
	}
	return (arr);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
	{
		ft_putchar('2');
		nb = 147483647;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
