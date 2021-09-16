/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:05:30 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 23:38:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kamehameha.h"

int possible(char **sudoku, int row, int column, int nb)
{
<<<<<<< HEAD
    if (check_square(sudoku, row, column, nb) == 1 || check_row(sudoku, column, nb) == 1 ||
        check_column(sudoku, row, nb) == 1)
        return (1);
    return (0);
=======
<<<<<<< HEAD

=======
>>>>>>> 4d51b1ff99049db45596e195f8d1494e0a66951f
        if(checkSquare(sudoku,row,column,nb) == 1 || checkRow(sudoku, column, nb) == 1 ||
             checkColumn(sudoku, row, nb) == 1)
                return(1);
    return(0);
>>>>>>> aff9786ea63a558c8bfe941da5d2f58702ccc89a
}
<<<<<<< HEAD
	if(checkSquare(sudoku,row,column,nb) == 1 && checkRow(sudoku, column, nb) == 1 &&
             checkColumn(sudoku, row, nb) == 1)
	{
	   	return(1);
	}
    return(0);
}
=======
>>>>>>> 4d51b1ff99049db45596e195f8d1494e0a66951f
