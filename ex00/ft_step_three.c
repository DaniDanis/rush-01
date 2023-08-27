/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:05:06 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 17:28:11 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_up_view(
	int *views[4], int matrix[4][4], int lines, int columns)
{
	if (views[lines][columns] == 3)
	{
		if (matrix[0][columns] == 0 && matrix[1][columns] == 0)
		{
			if (matrix[2][columns] == 4)
			{
				matrix[0][columns] = 1;
				matrix[1][columns] = 2;
			}
			else
			{
				matrix[1][columns] = 1;
				matrix[0][columns] = 2;
			}
		}
	}
}

void	ft_check_down_view(
	int *views[4], int matrix[4][4], int lines, int columns)
{
	if (views[lines][columns] == 3)
	{
		if (matrix[3][columns] == 0 && matrix[2][columns] == 0)
		{
			if (matrix[1][columns] == 4)
			{
				matrix[3][columns] = 1;
				matrix[2][columns] = 2;
			}
			else
			{
				matrix[2][columns] = 1;
				matrix[3][columns] = 2;
			}
		}
	}
}

void	ft_check_left_view(
	int *views[4], int matrix[4][4], int lines, int columns)
{
	if (views[lines][columns] == 3)
	{
		if (matrix[columns][0] == 0 && matrix[columns][1] == 0)
		{
			if (matrix[columns][2] == 4)
			{
				matrix[columns][0] = 1;
				matrix[columns][1] = 2;
			}
			else
			{
				matrix[columns][1] = 1;
				matrix[columns][0] = 2;
			}
		}
	}
}

void	ft_check_right_view(
	int *views[4], int matrix[4][4], int lines, int columns)
{
	if (views[lines][columns] == 3)
	{
		if (matrix[columns][3] == 0 && matrix[columns][2] == 0)
		{
			if (matrix[columns][1] == 4)
			{
				matrix[columns][3] = 2;
				matrix[columns][2] = 1;
			}
			else
			{
				matrix[columns][2] = 1;
				matrix[columns][3] = 2;
			}
		}
	}
}

void	ft_step_three(int *views[4], int matrix[4][4])
{
	int		lines;
	int		columns;

	lines = 0;
	while (lines < 4)
	{
		columns = 0;
		while (columns < 4)
		{
			if (lines == 0)
				ft_check_up_view(views, matrix, lines, columns);
			else if (lines == 1)
				ft_check_down_view(views, matrix, lines, columns);
			else if (lines == 2)
				ft_check_left_view(views, matrix, lines, columns);
			else
				ft_check_right_view(views, matrix, lines, columns);
			columns++;
		}
		lines++;
	}
}
