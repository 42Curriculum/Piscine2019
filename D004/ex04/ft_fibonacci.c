/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:43:28 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/13 23:37:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int i;

	i = 1;
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	}
}
