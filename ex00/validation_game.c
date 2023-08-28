/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:32:35 by caredua3          #+#    #+#             */
/*   Updated: 2023/08/27 21:33:57 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_game(int *views[4]);

void	invalid_extremes(
	int col_up[], int col_down[], int row_left[], int row_right[])
{
	int	*inputs[4];

	inputs[0] = col_up;
	inputs[1] = col_down;
	inputs[2] = row_left;
	inputs[3] = row_right;
	ft_game(inputs);
}

void	make_cols(int col_up[4], int col_down[4], int index, char *input)
{	
	int	j;

	j = 0;
	while (input[index])
	{
		if (index % 2 == 0)
		{
			if (index <= 6)
				col_up[j] = input[index] - '0';
			else if (index <= 14)
				col_down[j] = input[index] - '0';
			if (j == 3)
				j = 0;
			else
				j++;
		}
		index++;
	}
}

void	make_rows(int row_left[4], int row_right[4], int index, char *input)
{
	int	j;

	j = 0;
	while (input[index])
	{
		if (index % 2 == 0)
		{
			if (index <= 22 && index > 14)
				row_left[j] = input[index] - '0';
			else if (index >= 22)
				row_right[j] = input[index] - '0';
			if (j == 3)
				j = 0;
			else
				j++;
		}
		index++;
	}
}

void	validation_game(char *input)
{
	int	col_up[4];
	int	col_down[4];
	int	row_left[4];
	int	row_right[4];
	int	index;

	index = 0;
	make_cols(col_up, col_down, index, input);
	make_rows(row_left, row_right, index, input);
	invalid_extremes(col_up, col_down, row_left, row_right);
}
