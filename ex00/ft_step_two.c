/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:25:52 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 18:28:33 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_save_useless_squares(
	int collumn, int line, int useless_squares[4][4])
{
	int	index;

	index = 0;
	while (index < 4)
	{
		useless_squares[line][index] = -1;
		useless_squares[index][collumn] = -1;
		index++;
	}

}

void	ft_check_with_number(
	int matrix[4][4], int number_to_check, int line, int useless_squares[4][4])
{
	int	collumn;
	int	count_number;

	count_number = 0;
	collumn = 0;
	while (collumn < 4)
	{
		if (matrix[line][collumn] == number_to_check)
		{
			count_number++;
			ft_save_useless_squares(collumn, line, useless_squares);
		}
		else if (matrix[line][collumn] != 0)
			useless_squares[line][collumn] = -1;
		collumn ++;
	}
}

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

void	ft_step_two(int *views[4], int matrix[4][4])
{
	int useless_squares[4][4] = {0};
	int	number_to_check;
	int	count_number;
	int	line;
	int	collumn;
	int	index;
	int	sum;

	number_to_check = 3;
	count_number = 0;
	line = 0;
	while (line < 4)
	{
		ft_check_with_number(matrix, number_to_check, line, useless_squares);
		line++;
	}
	if (count_number == 3)
		ft_complete_number(matrix, number_to_check, useless_squares);
	else if (number_to_check == 3)
	{
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
					while (index < 4)
					{
						sum += useless_squares[line][index];
						index++;
					}
					if (sum == -3)
						matrix[line][collumn] = number_to_check;
					else
					{
						sum = 0;
						index = 0;
						while (index < 4)
						{
							sum += useless_squares[index][collumn];
							index++;
						}
						if (sum == -3)
							matrix[line][collumn] = number_to_check;
					}
				}
				collumn++;
			}
			line++;
		}
	}
	line = 4;
}
