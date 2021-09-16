/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:35:27 by slee              #+#    #+#             */
/*   Updated: 2019/07/31 23:03:45 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_coordinates
{
	int				x;
	int				y;
	char			c;
	int				value;
}					t_point;
typedef struct		s_characters
{
	char			empty;
	char			full;
	char			obstacle;
	int				lno;
	int				width;
	int				size;
}					t_chars;
t_point				**g_map;
t_chars				g_info;
int					char_atoi(char c);
int					ft_strlen(char *str);
int					ft_line_len(char *str);
int					ft_strcmp(char *s1, char *s2);
void				ft_putnbr(int nb);
char				*ft_mk_str(char *s1, char *s2);
t_point				**make_array(char *str, int i, int n, int k);
int					first_line(char *str);
void				error_msg();
int					map_init(char *str);
char				**make_test(char *str, int row, int col);
t_point				find_square(t_point **map, t_point winner, int i, int j);
int					ft_min(int i, int j, int k);
void				map_output(t_point **map, int col);
t_point				**write_x(t_point **map, t_point winner, char full);
void				map_output_x(t_point **map, int col);
void				ft_putchar(char c);
int					error_check(char *str);

#endif
