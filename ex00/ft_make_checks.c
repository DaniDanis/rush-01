/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_checks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:52:47 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 20:54:57 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_useless_and_put(int useless_squares[4][4], int matrix[4][4]);
void	ft_check_useless_one(
			int *views[4], int useless_squares[4][4], int line, int collumn);
void	ft_check_with_number(
			int matrix[4][4],
			int number_to_check,
			int line,
			int useless_squares[4][4]);

void	ft_make_checks(
			int *views[4], int matrix[4][4], int useless_squares[4][4])
{
	int	line;
	int	collumn;

	line = 0;
	while (line < 4)
	{
		ft_check_with_number(matrix, 3, line, useless_squares);
		line++;
	}
	line = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			ft_check_useless_one(
				views, useless_squares, line, collumn);
			collumn++;
		}
		line ++;
	}
	ft_check_useless_and_put(useless_squares, matrix);
}
