/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_step.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:29:35 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 17:31:08 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_last_step(int *views[4], int matrix[4][4])
{
	int	count_zeros;
	int	line;
	int	column;
	int	sum;

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
		{
			column = 0;
			while (column < 4)
			{
				if (matrix[line][column] == 0)
					matrix[line][column] = 10 - sum;
				column++;
			}
		}
		line++;
	}
}
