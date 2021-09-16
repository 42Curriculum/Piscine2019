/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:52:29 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/17 22:06:43 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	while (argv[i] != '\0')
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
