/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:14 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 21:22:25 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_game(char *input);
int		ft_check_param(char *param);
void	validation_game(char *input);

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
		validation_game(argv[1]);
	return (0);
}
