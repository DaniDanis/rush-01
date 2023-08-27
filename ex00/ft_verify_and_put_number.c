/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_and_put_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:54:08 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 18:55:43 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_and_put_number(int useless_squares[4][4], int collumn)
{
	int	sum;
	int	index;

	sum = 0;
	index = 0;
	while (index < 4)
	{
		sum += useless_squares[index][collumn];
		index++;
	}
	return (sum);
}
