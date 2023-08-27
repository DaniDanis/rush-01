/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:28 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 07:32:41 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_matrix(int matrix[4][4]);
void	ft_step_one(int *views[4], int matrix[4][4]);


void	ft_initicialmax(int *views[4], int line, int matrix[4][4], int collumn)
{
	matrix[collumn][3] = 1;
	matrix[collumn][2] = 2;
	matrix[collumn][3] = 4;
	if (views[line - 1][collumn] == 2)
		matrix[collumn][0] = 3;
	matrix[collumn][1] = 3;
	matrix[collumn][0] = 4;
}

void	ft_game(int *views[4])
{
	int	matrix[4][4] = {0};

	ft_step_one(views, matrix);
	ft_print_matrix(matrix);
}
