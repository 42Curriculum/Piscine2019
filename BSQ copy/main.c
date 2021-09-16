/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 21:18:46 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/29 21:51:23 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_list.h"
#define BUFFER_SIZE 42

int main()
{
	char *buffer[BUFFER_SIZE + 1];
	char *str;
	int b;
	
	str = "";
	while (b = read(0,buffer,BUFFER_SIZE))
	{
		buffer[b] = '\0';
		str = ft_mk_str(str, buffer);
	}
	
	
}
