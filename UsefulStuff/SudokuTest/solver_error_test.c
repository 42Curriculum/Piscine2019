/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 06:37:54 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 18:12:31 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>// Include malloc

int     error_check(char **str)
{
    int i; //index of substring
    int numbers;// number of  numbers in the array
    int l;//index of string

    while (str[l] != '\0')//Run until end of string
    {
        if (str[l] <'0' || str[l] > '9' && str[l] != '.')// if index is not a nmber and is not a  dot, return false
            return(0);
        if (str[l] != '.') // if index is not a dot, count +1 number
            numbers++;
        i++;
    }
    if (numbers < 17 || checkcol(str) == 0 || checkrow(str) == 0 || checksquare(str) == 0) //If there's an error, return (0);
        return(0);
    else
        return(1);
}
int checkrow(char **str)
{
    int i;//index of str array
    int l;
    int n;// index of number array
    char *ar;// Array to store numbers that have already been seen. 

    int l = 0;
    int i = 0;
    ar = (char*)malloc(sizeof(ar) * 9);

    while (i != 81)
    {
        if (str[i] != '.')
        {
            if (i == 8 || i == 17 ||i == 26 ||i == 35 ||i == 44 ||i == 53 ||i == 62 ||i == 71)
                 empty(ar);
            while (ar[n] != '\0') // while the array in which we store the numbers is not at the end,  if source array contains the same value as number array, return false
            {
                if (str[i] == ar[n])
                {
                    return(0);
                }  
                n++;   
            }
            ar[l] == str[i];// store numbe rin int array
            l++;
        }
        i++;
    }
    return(1);
}
int checkcol(char *str)
{
    int i;
    int l;
    int n;
    char *ar;

    l = 0;
    i = 0;
    ar = (char*)malloc(sizeof(str) * 9);
    while (i != '\0')
    {
        n = 0;
        if (str[i] != '.')
        {
            while (ar[n] != '\0')
            {
                if (str[i] == ar[n++])
                    return(0);
             ar[l++] == str[i];
            }
        } 
        if(i < 71 && i < 80)
        {
            i = i -71;
             empty(ar);
        }
        else 
             i = i + 9;
    }
    return(1);
}
int checksquare(char *str)
{
    int i;
    char *ar;
    int n;
    int l;
    int m;

    m = 0;
    l = 0;
    n = 0;
    i = 0;
    ar = (char*)malloc(sizeof(str) * 9);
    while (str[i++] != '\0')
    {
        n = 0;
        if(i % 3 == 0)// every multiple of 3, set i +7 (starts a new line)
            i = i+7;
        if (i == 20 + m)
            empty(ar);
            m = m + 3;
        if( i == 74 || i == 77)// when i = 74 or i = 78, go back at the too
            i = i - 71;
        if (str[i] != '.')
        {
            while (ar[n] != '\0')
            {
                if (str[i] == ar[n++])
                    return(0);
            }
                ar[l++] == str[i];
        }
        i++;
    }
    return(1);
}



int empty(char **str)// reset array of strings
{
    int i;

    i = 0;
    while (i != 0)
    {
        str[i] = '.';
        i++;
    }
    return(0);
    
}