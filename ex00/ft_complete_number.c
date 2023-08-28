/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:47:05 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 20:47:07 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
