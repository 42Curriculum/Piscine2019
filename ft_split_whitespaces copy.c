/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:27:23 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/18 23:03:35 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int word_count(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {
            if (str[i - 1] != '\n' || str[i - 1] != '\t' || str[i - 1] != ' ')
            {
                count++;
            }
            i++;
        }
        i++;
    }
    return (count);
}
int word_length(int i, char *str)
{
    int n;
    int spaces;

    spaces = 0;
    n = 0;
    while (str[i] != 0)
    {
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {
            i++;
            spaces++;
        }
        while (str[i] != '\n' || str[i] != '\t' || str[i] != ' ')
        {
            i++;
        }
    }
    if ((i - spaces) < 0)
    {
        i = (i - spaces) * -1;
    }

    return (i);
}
char **ft_split_whitespace(char *str)
{
    char **ar;
    int i;
    int n;
    int ii;

    i = 0;
    n = 0;
    ii = 0;
    ar = (char **)malloc(sizeof(str) * word_count(str) + 1);
    while (str[i] != '\0')
    {
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {
            i++;
        }
        ar[i] = (char *)malloc(sizeof(str) * (word_length(i, str) + 1));
        while (str[i - 1] != '\n' || str[i - 1] != '\t' || str[i - 1] != ' ')
        {
            ar[ii][n] = str[i];
            n++;
            i++;
        }
        i++;
    }
    ar[i][n] = '\0';
    ar[++i] = 0;
    return (ar);
}

int main()
{
    char dest[] = "My name is Dan ";

    printf("it works : %s", *ft_split_whitespace(dest));

    return (0);
}
