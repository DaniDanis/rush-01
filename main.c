/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:14 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 15:36:58 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	write(1, "Error\n", 5);
}

int	ft_check_param(char *param)
{
	int	index;

	index = 0;
	while (param[index])
	{
		if (index % 2 == 0)
		{
			if (!(param[index] >= '1' && param[index] <= '4'))
			{
				ft_print_error();
				return (0);
			}
		}
		else if (param[index] != ' ')
		{
			ft_print_error();
			return (0);
		}
		index++;
	}
	if (index != 31)
		ft_print_error();
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	ft_check_param(argv[1]);
	return (0);
}
