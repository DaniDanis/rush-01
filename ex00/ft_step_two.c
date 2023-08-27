/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:25:52 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 20:37:13 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verify_and_put_number(int useless_squares[4][4], int collumn);
void	ft_check_with_number(
			int matrix[4][4],
			int number_to_check,
			int line,
			int useless_squares[4][4]);

void	ft_complete_number(
	int matrix[4][4], int number_to_check, int useless_squares[4][4])
{
	int	line;
	int	collumn;
	{
		line = 0;
		while (line < 4)
		{
			collumn = 0;
			while (collumn < 4)
			{
				if (useless_squares[line][collumn] == 0)
					matrix[line][collumn] = number_to_check;
			}
		}
	}
}

void	ft_check_useless_one(
	int *views[4], int useless_squares[4][4], int line, int collumn)
{
	if (views[line][collumn] == 3)
	{
		if (line == 0)
			useless_squares[0][collumn] = -1;
		else if (line == 1)
			useless_squares[3][collumn] = -1;
		else if (line == 2)
			useless_squares[collumn][0] = -1;
		else
			useless_squares[collumn][3] = -1;
	}
}

void	ft_useless_square_sum(
			int line, int index, int sum, int useless_squares[4][4])
{
	while (index < 4)
	{
		sum += useless_squares[line][index];
		index++;
	}
}

void	ft_check_useless_and_put(int useless_squares[4][4], int matrix[4][4])
{
	int	line;
	int	collumn;
	int	index;
	int	sum;

	line = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			if (useless_squares[line][collumn] == 0)
			{
					index = 0;
					sum = 0;
				ft_useless_square_sum(line, index, sum, useless_squares);
				if (sum == -3)
					matrix[line][collumn] = 3;
				else
				{
					sum = ft_verify_and_put_number(
							useless_squares, collumn);
					if (sum == -3)
						matrix[line][collumn] = 3;
				}
			}
			collumn++;
		}
		line++;
	}
}

void	ft_step_two(int *views[4], int matrix[4][4])
{
	int	useless_squares[4][4] = {0};
	int	line;
	int	collumn;
	int	index;
	int	sum;

	line = 0;
	while (line < 4)
	{
		ft_check_with_number(matrix, 3, line, useless_squares);
		line++;
	}
	line = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			ft_check_useless_one(
				views, useless_squares, line, collumn);
			collumn++;
		}
		line ++;
	}
	ft_check_useless_and_put(useless_squares, matrix);
}
