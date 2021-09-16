/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:16:23 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 23:42:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "kamehameha.h"

int main(int argc, char **argv)
{
	if (argc != 10) //|| error_check(argv) == 0)
	{
		write(1, "error\n", 6);
	}
	else
	{
		if (solve(argv, 1, 0) == 1)
		{
			print(argv);
		}
		else
			write(1, "erro\n", 6);
	}
	return (0);
}
