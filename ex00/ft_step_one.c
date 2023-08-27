/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:31:00 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 07:31:47 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_line_zero(int *views[4], int line, int matrix[4][4], int collumn)
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

void	ft_line_one(int *views[4], int line, int matrix[4][4], int collumn)
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

void	ft_line_two(int *views[4], int line, int matrix[4][4], int collumn)
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

void	ft_line_three(
	int *views[4], int line, int matrix[4][4], int collumn)
{
	if (views[line][collumn] == 4)
	{
		matrix[collumn][3] = 1;
		matrix[collumn][2] = 2;
		matrix[collumn][1] = 3;
		matrix[collumn][0] = 4;
	}
	if (views[line][collumn] == 1)
	{
		matrix[collumn][3] = 4;
		if (views[line - 1][collumn] == 2)
		{
			matrix[collumn][0] = 3;
		}
	}
	if (views[line][collumn] == 3)
	{
		if (views[line - 1][collumn] == 2)
		{
			matrix[collumn][1] = 4;
		}
	}
}

void	ft_step_one(int *views[4], int matrix[4][4])
{
	int	line;
	int	collumn;

	line = 0;
	collumn = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			if (line == 0)
				ft_line_zero(views, line, matrix, collumn);
			else if (line == 1)
				ft_line_one(views, line, matrix, collumn);
			else if (line == 2)
				ft_line_two(views, line, matrix, collumn);
			else
				ft_line_three(views, line, matrix, collumn);
			collumn++;
		}
		line++;
	}
}