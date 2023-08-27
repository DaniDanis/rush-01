/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_step.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:29:35 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 18:27:20 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_update_rows(int matrix[4][4], int sum, int line)
{
	int	column;

	column = 0;
	while (column < 4)
	{
		if (matrix[line][column] == 0)
			matrix[line][column] = 10 - sum;
		column++;
	}
}

void	ft_check_update_rows(int matrix[4][4])
{
	int	line;
	int	column;
	int	sum;
	int	count_zeros;

	line = 0;
	while (line < 4)
	{
		column = 0;
		sum = 0;
		count_zeros = 0;
		while (column < 4)
		{
			if (matrix[line][column] == 0)
				count_zeros++;
			sum += matrix[line][column];
			column++;
		}
		if (count_zeros == 1)
			ft_update_rows(matrix, sum, line);
		line++;
	}
}

void	ft_check_column(int matrix[4][4], int column)
{
	int	index;
	int	count_zeros;
	int	sum;

	index = 0;
	count_zeros = 0;
	sum = 0;
	while (index < 4)
	{
		sum += matrix[index][column];
		if (matrix[index][column] == 0)
			count_zeros++;
		index++;
	}
	if (count_zeros == 1)
		index = 0;
	while (index < 4)
	{
		if (matrix[index][column] == 0)
			matrix[index][column] = 10 - sum;
		index++;
	}
}

void	ft_check_update_columns(int matrix[4][4])
{
	int	line;
	int	column;

	line = 0;
	while (line < 4)
	{
		column = 0;
		while (column < 4)
		{
			if (matrix[line][column] == 0)
				ft_check_column(matrix, column);
			column++;
		}
		line++;
	}
}

void	ft_last_step(int matrix[4][4])
{
	ft_check_update_rows(matrix);
	ft_check_update_columns(matrix);
}
