/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:30 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/23 20:21:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_add(int n1, int n2)
{
	int i;

	i = n1 + n2;
	ft_putnbr(i);
}

void	ft_sub(int n1, int n2)
{
	int i;

	i = n1 - n2;
	ft_putnbr(i);
}

void	ft_mod(int n1, int n2)
{
	int i;

	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero \n", 22);
		return ;
	}
	i = n1 % n2;
	ft_putnbr(i);
}

void	ft_div(int n1, int n2)
{
	int i;

	if (n2 == 0)
	{
		write(1, "Stop : division by zero \n", 24);
		return ;
	}
	i = n1 / n2;
	ft_putnbr(i);
}

void	ft_mul(int n1, int n2)
{
	int i;

	i = n1 * n2;
	ft_putnbr(i);
}
