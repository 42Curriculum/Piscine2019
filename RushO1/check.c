/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:36:37 by davigarc          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/07/21 23:38:50 by jjosephi         ###   ########.fr       */
=======
/*   Updated: 2019/07/21 23:02:09 by yelee            ###   ########.fr       */
>>>>>>> aff9786ea63a558c8bfe941da5d2f58702ccc89a
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int check_column(char **sudoku, int row, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][row] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int check_row(char **sudoku, int column, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[column][i] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int convert_row(int row)
{
	if (row < 3)
	{
		row = 0;
	}
	else if (row > 2 && row < 6)
	{
		row = 3;
	}
	else if (row > 5 && row < 9)
	{
		row = 6;
	}
	return (row);
}

int convert_col(int column)
{
	if (column < 3)
	{
		column = 0;
	}
	else if (column > 2 && column < 6)
	{
		column = 3;
	}
	else if (column > 5 && column < 9)
	{
		column = 6;
	}
	return (column);
}

int check_square(char **sudoku, int row, int column, int num)
{
	int i;
	int j;

	i = 0;
	j = 0;
	row = convert_row(row);
	column = convert_col(column);
	while (row + i < row + 3)
	{
		while (column + i < column + 3)
		{
			if (sudoku[i][j] == num)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
