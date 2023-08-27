/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 05:52:56 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_matrix(int matrix[4][4]);

void	ft_linezero(int *views[4], int line, int matrix[4][4], int collumn)
{
	if (views[line][collumn] == 4)
	{
		matrix[0][collumn] = 1;
		matrix[1][collumn] = 2;
		matrix[2][collumn] = 3;
		matrix[3][collumn] = 4;
	}
	if (views[line][collumn] == 1)
	{
		matrix[0][collumn] = 4;
		if (views[line + 1][collumn] == 2)
		{
			matrix[3][collumn] = 3;
		}
	}
	if (views[line][collumn] == 3)
	{
		if (views[line + 1][collumn] == 2)
		{
			matrix[2][collumn] = 4;
		}
	}
}

void	ft_lineone(int *views[4], int line, int matrix[4][4], int collumn)
{
	if (views[line][collumn] == 4)
	{
		matrix[3][collumn] = 1;
		matrix[2][collumn] = 2;
		matrix[1][collumn] = 3;
		matrix[0][collumn] = 4;
	}
	if (views[line][collumn] == 1)
	{
		matrix[3][collumn] = 4;
		if (views[line - 1][collumn] == 2)
		{
			matrix[0][collumn] = 3;
		}
	}
	if (views[line][collumn] == 3)
	{
		if (views[line - 1][collumn] == 2)
		{
			matrix[1][collumn] = 4;
		}
	}
}

void	ft_linetwo(int *views[4], int line, int matrix[4][4], int collumn)
{
	if (views[line][collumn] == 4)
	{
		matrix[collumn][0] = 1;
		matrix[collumn][1] = 2;
		matrix[collumn][2] = 3;
		matrix[collumn][3] = 4;
	}
	if (views[line][collumn] == 1)
	{
		matrix[collumn][0] = 4;
		if (views[line + 1][collumn] == 2)
		{
			matrix[collumn][3] = 3;
		}
	}
	if (views[line][collumn] == 3)
	{
		if (views[line + 1][collumn] == 2)
		{
			matrix[collumn][2] = 4;
		}
	}
}

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

void	ft_orthers(
	int *views[4], int line, int matrix[4][4], int collumn)
{
	if (views[line][collumn] == 4)
		ft_initicialmax(views, line, matrix, collumn);
	if (views[line][collumn] == 1)
		matrix[collumn][3] = 4;
	if (views[line - 1][collumn] == 2)
		matrix[collumn][0] = 3;
	if (views[line][collumn] == 3)
	{
		if (views[line - 1][collumn] == 2)
		{
			matrix[collumn][1] = 4;
		}
	}
}

char	ft_game(int *views[4])
{
	int	matrix[4][4] = {0};
	int line;
	int collumn;
	int count_four;

	line = 0;
	collumn = 0;
	count_four = 0;

	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			if (line == 0)
				ft_linezero(views, line, matrix, collumn);
			else if (line == 1)
				ft_lineone(views, line, matrix, collumn);
			else if (line == 2)
				ft_linetwo(views, line, matrix, collumn);
			else
			{
				ft_orthers(views, line, matrix, collumn);
				collumn++;
			}
			line++;
		}

		line = 0;
		collumn = 0;

		ft_print_matrix(matrix);
		return (0);
	}
}
