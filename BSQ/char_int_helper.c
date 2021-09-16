/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_int_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:56:50 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/31 19:21:31 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int			char_atoi(char c)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (c == '-')
	{
		sign = -1;
		i++;
	}
	result = (result * 10) + c - '0';
	return (sign * result);
}
