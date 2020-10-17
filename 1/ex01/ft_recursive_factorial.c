/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:28:28 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/13 23:30:03 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return (1);
	}
	else if ((nb <= 0) || (nb >= 13))
	{
		return (0);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}
