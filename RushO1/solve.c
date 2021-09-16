/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:38:23 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 22:43:42 by yelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kamehameha.h"

int solve(char **sudoku, int row, int column)
{
  int real_number;
  int num;

  num = 0;
  if (column == 9)
  {
    column = 0;
    row++;
    if (row == 10)
      return (1);
  }
  if (sudoku[row][column] != '.')
    return (solve(sudoku, row, column + 1));
  while (++num < 10)
  {
    real_number = num + '0'; //
    if (possible(sudoku, row, column, real_number) == 1)
    {
      sudoku[row][column] = real_number;
      if (solve(sudoku, row, column + 1) == 1)
        return (1);
    }
  }
  sudoku[row][column] = '.';
  return (0);
}
