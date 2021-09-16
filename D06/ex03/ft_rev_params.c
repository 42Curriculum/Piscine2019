/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:51:14 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/17 22:08:08 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;
	int c;

	i = 0;
	while (argv[i] != 0)
	{
		argv[i] = c;
		if (argv[i] > c)
		{
			argv[i] = c;
		}
		else
		{
			n = 0;
			while (argv[c][n] != '\0')
			{
				ft_putchar(argv[i][n]);
				n++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
