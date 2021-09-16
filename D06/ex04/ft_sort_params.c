/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:08:49 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 11:03:23 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

int		prstr(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	while (i < argc)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && ((s1[i]) != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*aa;

	i = 0;
	while (i++ < (argc - 1))
	{
		if (i < (argc - 1) && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			aa = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aa;
			i = 0;
		}
	}
	prstr(argc, argv);
	return (0);
}