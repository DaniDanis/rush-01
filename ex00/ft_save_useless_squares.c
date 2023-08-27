/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_useless_squares.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:25:55 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 20:25:59 by dadantas         ###   ########.fr       */
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