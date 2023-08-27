/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:38:48 by caredua3          #+#    #+#             */
/*   Updated: 2023/08/27 05:39:15 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

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
