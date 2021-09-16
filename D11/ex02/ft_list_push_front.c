/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:06:10 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/25 10:12:41 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


void    ft_list_push_front(t_list **begin_list, void *data)
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
