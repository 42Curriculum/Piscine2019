/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:39:40 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/12 22:40:31 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strrev(char *str)
{
	int i;
	int l;

	l=0;

	while (str[l] != 0)
	{
		l++;
	}

	printf("%d" ,l);

	i=l;

	while (str[l] >= 0)
	{
		printf("%d",str[l]);
		l--;
	}
	return(str[0]);
}

int	main()
{
	
	char *p;

	p = "Hello World";
	printf("%d",p);

	ft_strrev(p);
	return(0);
}
