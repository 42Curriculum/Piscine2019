/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:32:53 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/11 23:27:03 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int arr[2];

	arr[0] = 0;
	arr[1] = 1;
	while (arr[0] <= 98)
	{
		ft_putchar(arr[0] / 10 + '0');
		ft_putchar(arr[0] % 10 + '0');
		ft_putchiar(' ');
		ft_putchar(arr[1] / 10 + '0');
		ft_putchar(arr[1] % 10 + '0');
		arr[1]++;
		if (arr[1] == 100)
		{
			arr[0]++;
			arr[1] = arr[0] + 1;
		}
		if (arr[0] <= 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
