/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:12:43 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/16 22:28:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
unsigned int ft_strlcat(char *dest, char*src, unsigned int size)
{
	unsigned int n;

	n = ft_strlen(dest);
	while (n <= (size - 1))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (ft_strlen(src));
}

