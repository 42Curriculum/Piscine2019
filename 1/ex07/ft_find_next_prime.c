/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:11:04 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/13 23:35:11 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int n;

	n = nb - 1;
	if (nb <= 1)
	{
		return (0);
	}
	while (n > 1)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		else
		{
			n --;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = ft_prime(nb);
	if (i == 1)
	{ 
		return (1);
	}
	while (i == 0)
	{
		nb ++;
		i = ft_prime(nb);
	}
	return (nb);
}
