/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 18:39:55 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_matrix(int matrix[4][4]);
void	ft_step_one(int *views[4], int matrix[4][4]);
void	ft_step_two(int *views[4], int matrix[4][4]);
void	ft_step_three(int *views[4], int matrix[4][4]);
void	ft_last_step(int matrix[4][4]);

void	ft_initicialmax(int *views[4], int line, int matrix[4][4], int collumn)
{
	matrix[collumn][3] = 1;
	matrix[collumn][2] = 2;
	matrix[collumn][3] = 4;
	if (views[line - 1][collumn] == 2)
	matrix[collumn][0] = 3;
	matrix[collumn][1] = 3;
	matrix[collumn][0] = 4;
}

void	ft_game(int *views[4])
{
	int	matrix[4][4];
	int	line;
	int	column;

	line = 0;
	while (line < 4)
	{
		column = 0;
		while (column < 4)
		{
			matrix[line][column] = 0;
			column++;
		}
		line++;
	}
	ft_step_one(views, matrix);
	ft_step_two(views, matrix);
	ft_step_three(views, matrix);
	ft_last_step(matrix);
	ft_last_step(matrix);
	ft_print_matrix(matrix);
}
