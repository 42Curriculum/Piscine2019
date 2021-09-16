/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:10:42 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/23 20:22:45 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	(*g_f_array[6])(int n1, int n2);
char	*g_op[] = {"+", "-", "/", "%", "*"};

void	define(void)
{
	g_f_array[0] = &ft_add;
	g_f_array[1] = &ft_sub;
	g_f_array[2] = &ft_div;
	g_f_array[3] = &ft_mod;
	g_f_array[4] = &ft_mul;
}

int		do_op(int n1, int n2, char op)
{
	int i;

	i = 0;
	while (g_op[i] != '\0')
	{
		if (g_op[i][0] == op)
		{
			g_f_array[i](n1, n2);
			break ;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	sign;

	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0", 1);
		return (0);
	}
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	sign = *argv[2];
	define();
	do_op(n1, n2, *argv[2]);
	return (0);
}
