/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:25:16 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/11 22:31:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int 	ft_putchar(char c)
{
 write (1, &c, 1);
 return(0);
}
void ft_print_comb2(void)
{
	int d1[2];
	int d2[2];


d1[1] = 0;
while (d1[0]<=9)
{
	
	while (d1[1]<=9)
	{
		d2[0]=d1[0]+1;
		while (d2[0]<=9)
		{
d2[1]=d1[1]+1;
			while (d2[1] <= 9)
			{
				ft_putchar(d1[0]+ '0');
				ft_putchar(d1[1]+ '0');
				ft_putchar(' ');
				ft_putchar(d2[0] + '0');
				ft_putchar(d2[1] + '0');
				ft_putchar(',');

				if(!(d1[0]==9))
				{
					ft_putchar(',');
					ft_putchar(' ');

				}
				d2[1]++;	
			}
			
			d2[0]++;
		}	
		d1[1]++;
	}
	d1[0]++;
}
}

int 	main()
{
	ft_print_comb2();
	return(0);
}


