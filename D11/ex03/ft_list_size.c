/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:13:25 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/24 23:10:38 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*count;
	int		n;

	n = 0;
	count = begin_list;
	while (count->next != 0)
	{
		count = count->next;
		n++;
	}
	return (n + 1);
}
