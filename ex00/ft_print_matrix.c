/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:38:48 by caredua3          #+#    #+#             */
/*   Updated: 2023/08/27 21:23:55 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_error(void);

int	ft_print_matrix(int matrix[4][4])
{
	int		line;
	int		collumn;
	char	print;

	line = 0;
	collumn = 0;
	while (line < 4)
	{
		collumn = 0;
		while (collumn < 4)
		{
			print = matrix[line][collumn] + '0';
			write(1, &print, 1);
			collumn++;
			if (collumn != 4)
				write(1, " ", 1);
		}
		line++;
		write(1, "\n", 1);
	}
	return (1);
}
