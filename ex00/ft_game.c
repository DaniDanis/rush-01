/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 18:56:37 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_game(char *input)
{
	int	matriz[4][4];
	char	col_up[20];
	char col_down[20];
	char row_left[20];
	char row_right[20];
	int	index;
	int	j;

	index = 0;
	j = 0;

	while(index <= 30)
	{
		if(index <= 6)
			col_up[j] = input[index];
		else if(index <= 14)
			col_down[j] = input[index];
		else if(index <= 22)
			row_left[j] = input[index];
		else
			row_right[j] = input[index];

		if(j == 3)
			j = 0;
		else 
			j++;
		index = index + 2;
	}

	printf("%s\n", col_up);
	printf("%s\n", col_down);
	printf("%s\n", row_left);
	printf("%s", row_right);

	// matriz[0][0] = 1;
	// if (input)
	// 	printf("%i 2 3 4\n4 2 3 4\n4 2 3 4\n4 2 3 4\n", matriz[0][0]);
	return (0);
}
