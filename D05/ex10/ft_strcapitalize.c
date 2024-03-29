/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:38:27 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/16 20:48:48 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
		}
		if (str[i] >= 'a' && str[i] <= 'a')
		{
			if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'))
			{
				str[i] = str[i] - 32;
			}
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
