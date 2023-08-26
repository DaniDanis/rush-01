/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:14 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 17:08:53 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_param(char *param);

void	ft_print_error(void)
{
	write(1, "Error\n", 5);
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
