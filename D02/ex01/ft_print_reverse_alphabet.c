/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:24:54 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/11 16:33:48 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c++);
	}
}
