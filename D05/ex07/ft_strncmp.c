/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:03:41 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/16 13:52:53 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int nb;

	i = 0;
	nb = n;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while (i < nb)
		{
			while (s1[i] == s2[i] || s1[i] == '\0')
			{
				if (i == (nb - 1))
				{
					return (s2[i] - s1[i]);
				}
				i++;
			}
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
