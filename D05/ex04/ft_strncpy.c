/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:16:27 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/15 14:27:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int i)
{
	int n;
	int t;

	t = i;
	n = 0;
	while (n < t)
	{
		dest[n] = src[n];
		n++;
	}
	while (n < ft_strlen(dest))
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
