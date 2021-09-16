/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:12:46 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 23:28:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *ar;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
	}
	ar = (int*)malloc(sizeof(range) * (max - min));
	while (min < max)
	{
		ar[i] = min;
		min++;
		i++;
	}
	return (max - min);
}
