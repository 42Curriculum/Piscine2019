/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:54:52 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/16 22:32:42 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (i != (size - ft_strlen(dest)))
	{
		if (i < n)
		{
			dest[i - 1] = src[n];
			n++;
			i++;
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
