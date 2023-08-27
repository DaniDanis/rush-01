/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:32:35 by caredua3          #+#    #+#             */
/*   Updated: 2023/08/26 21:06:04 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void invalid_extremes(
	int col_up[], int col_down[], int row_left[], int row_rght[])
{
}

void validation_game(char *input)
{
	int col_up[4];
	int col_down[4];
	int row_left[4];
	int row_right[4];
	int index;
	int j;

	index = 0;
	j = 0;
	while (input[index])
	{
		if (index % 2 == 0)
		{
			if (index <= 6)
				col_up[j] = input[index] - '0';
			else if (index <= 14)
				col_down[j] = input[index] - '0';
			else if (index <= 22)
				row_left[j] = input[index] - '0';
			else
				row_right[j] = input[index] - '0';

			if (j == 3)
				j = 0;
			else
				j++;
		}
		index++;
	}
}
