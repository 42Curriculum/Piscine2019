/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:34:01 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/25 10:21:27 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (begin_list == NULL)
		return ;
	temp = (*begin_list);
	while ((*begin_list)->next != 0)
	{
		temp = (*begin_list);
		(*begin_list) = (*begin_list)->next;
		free(temp);
	}
	begin_list = NULL;
}
