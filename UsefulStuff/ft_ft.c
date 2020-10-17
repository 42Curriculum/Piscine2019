/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:15:18 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/12 12:58:58 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nbr);

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr(int nbr)
{
	if(nbr!=0)
		{
			ft_putnbr(nbr / 10);
			ft_putchar(nbr % 10 +'0');
		}
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int main()
{
	int a;
	int *p;

	p=(&a);
	a =1;
	//ft_ft(p);
	//ft_putnbr(p);
	printf("%p",p);	
	return(0);
}
