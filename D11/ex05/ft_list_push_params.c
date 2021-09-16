/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:34:38 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/24 23:41:12 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if (*begin_list == 0)
	{
		begin_list = &elem;
		return ;
	}
	elem->next = *begin_list;
	*begin_list = elem;
	return ;
}

t_list	*ft_list_push_param(int ac, char **av)
{
	t_list	*list;
	int		i;

	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
