/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:14 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 18:10:59 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_game(char *input);
int		ft_check_param(char *param);

int	ft_print_error(void)
{
	write(1, "Error\n", 5);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	if (ft_check_param(argv[1]))
		ft_game(argv[1]);
	return (0);
}
