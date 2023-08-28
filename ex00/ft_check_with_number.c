/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_with_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:26:37 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 20:47:11 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_save_useless_squares(
			int collumn, int line, int useless_squares[4][4]);

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
