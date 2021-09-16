/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:54:31 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/28 19:57:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c, int x)
{
	int i;

	i = x;
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

int		start(int x)
{
	ft_putchar('o', 1);
	ft_putchar('-', x - 2);
	if (x == 1)
	{
		return (0);
	}
	ft_putchar('o', 1);
	return (0);
}

void	ending(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('\n', 1);
		ft_putchar('o', 1);
		if (x > 1)
		{
			ft_putchar('-', x - 2);
			ft_putchar('o', 1);
		}
	}
}

int		rush(int x, int y)
{
	int n;

	n = y;
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	start(x);
	while (--n - 1 > 0)
	{
		ft_putchar('\n', 1);
		ft_putchar('|', 1);
		ft_putchar(' ', x - 2);
		if (x > 1)
		{
			ft_putchar('|', 1);
		}
	}
	ending(x, y);
	return (0);
}

int	main()
{
	rush(6, 6);
	return (0);
}
