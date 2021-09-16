/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 06:39:22 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/21 15:58:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **solver_error_test(char **str);

int main(int argc, char **argv)
{
    int i;
    char **grid;

    i = 1;
    if(argc != 10)
    {
        write(1,"ERROR", 1);
        return(0);
    }
    while (argv[i] != '\0')
        i++;
    if((i) > 82)
        return(0);
    grid = gridmaker(argv); 
    if(solver_error_test(grid) == 0)
    {
        write(1,"ERROR", 1);
        return(0);
    }   

}
char *gridmaker(char **argv)
{
    int i;
    int n;
    int g;
    char **grid;

     i = 0;
     n = 0;
    grid = (char)malloc(sizeof(grid) * 82);
    while (argv[i] !=0)
    {
        grid[g] = argv[i];
        g++;
        while (argv[i][n] =! '\0')
        {   
            grid[g] = malloc(sizeof(grid) * 9);
            grid[g] = argv[i][n];
        }
        i++;
    }
    return(grid);
}