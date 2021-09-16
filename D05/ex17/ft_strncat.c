/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:47:18 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/16 20:24:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (n != nb)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	if (dest[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
