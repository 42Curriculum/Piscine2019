/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:18:43 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/13 13:35:09 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	i = 1;
	n = nb;
	if (power <= 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (0);
	}
	while (i <= power)
	{
		nb = (nb * n);
		i++;
	}
	return (nb);
}
