/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:56:50 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/23 22:34:40 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ar;

	i = 0;
	ar = (int)malloc(sizeof(tab) * length);
	while (tab[i] != '\0')
	{
		ar[i] = f(tab[i]);
		i++;
	}
	return (ar);
}
