/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:35:27 by slee              #+#    #+#             */
/*   Updated: 2019/07/29 21:50:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
typedef struct		s_coordinates
{
	int				*x;
	int				*y;
	int 			value;
}					t_list;
int		ft_strlen(char *str);
int		ft_line_len(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
char *ft_mk_str(char *s1, char *s2);

void				ft_list_push_back(t_list **begin_list, void *data);

t_list				*ft_create_elem(void *data);

char				*get_string();

#endif