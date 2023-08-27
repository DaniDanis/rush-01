/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 00:28:40 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_matrix(int matrix[4][4])
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
			printf("%d ", matrix[line][collumn]);
			collumn++;
		}
		line++;
		printf("\n");
	}
}

char	ft_game(int *views[4])
{
	int matrix[4][4] = {0};
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
			else if (line == 1)
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
						matrix[2][collumn] = 4;
					}
				}
			}
			else if (line == 2)
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
			else
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
						matrix[collumn][2] = 4;
					}
				}
			}
			collumn++;
		}
		line ++;
	}

	line = 0;
	collumn = 0;
	
	ft_print_matrix(matrix);
	return (0);
}




int	main(int argc, char **argv)
{
	int col_up[4] = {4, 3, 2, 1};
	int col_down[4] = {1, 2, 2, 2};
	int row_left[4] = {4, 3, 2, 1};
	int row_right[4] = {1, 2, 2, 2};
	int	*inputs[4];

	inputs[0] = col_up;
	inputs[1] = col_down;
	inputs[2] = row_left;
	inputs[3] = row_right;


	ft_game(inputs);
}
