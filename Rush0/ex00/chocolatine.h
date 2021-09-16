/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chocolatine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 18:33:36 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/28 21:43:58 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHOCOLATINE_H
# define CHOCOLATINE_H

void	ft_putchar(char c);
void	write_size(int x, int y);
void	p_rush_check(char *str);
int		ft_strcmp(char *s1, char *s2);
int		rush_check(char *str, int x, int y);
char	*to_arr(char *arr, char c, int i, int x);
int		ft_strlen(char *str);
int		ft_line_len(char *str);
void	ft_putnbr(int nb);
char	*rush(int x, int y);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

#endif
