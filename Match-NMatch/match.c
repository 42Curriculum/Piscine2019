/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:52:08 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/20 23:48:04 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     match(char *s1, char*s2)
{
    int i;
    int star_len;
    int dif;

    i = 0;

    dif = str_len(s1) - str_len(s2);
    while (s2[i] != '*')
    {
        if(s1[i] == s2[i])
            i++;
        else
            return(0);
    }
    if (s2[i] + 1 != '\0')
    {
        i++;
        

    }
    

}
int star(char *str)
{
    int i;

    while (str[i] != '*' )
    {
        i++;
    }
    return (i);
}
int str_len(char *str)
{
    int i;

    while (str[i] != '\0' )
    {
        i++;
    }
    return(i);
}