/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:11:33 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 23:13:27 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ar;
	int i;

	i = 0;
	ar = (int*)malloc(sizeof(ar) * (max - min));
	while (min < max)
	{
		ar[i] = min;
		min++;
		i++;
	}
	return (ar);
}
