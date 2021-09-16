/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 02:57:32 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 22:26:39 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kamehameha.h"

int     check_num(char **str, int i, int l)
{
    int numbers;
 
    numbers = 0;
       while (str[l] != '\0')
    {
        if ((*str[l] <'0' || *str[l] > '9') && *str[l] != '.')
            return(0);
      while (str[l][i] != '\0')
        {
            if ((str[l][i] <'0' || str[l][i] > '9') && str[l][i] != '.')
                return(0);
            if (str[l][i] != '.')
                numbers++;
            i++;
        } 
        if (*str[l] != '.')
            numbers++; 
        l++;
    } 
   if (numbers < 17 ) 
       return(0);
    else 
    
        return(1);

} 

   int check_size(char **str)
{
	int i;
	int n;
   
    i = 1;
    n = 0;
    while (*str[i] != '\0')
    {
        while (str[i][n] != '\0')
        {
            n++;
        }
        i++;
    }
    if ((i + n) != 82)
        return(0);
    return(1);
}    


int	error_check(char **str)
{
	if (check_num(str, 1 , 0) == 0 || check_size(str) == 0)
	{
		return (0);
	}
	return (1);
}
