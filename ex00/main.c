/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:14 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/27 21:34:06 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	validation_game(char *input);
int		ft_check_param(char *param);
int		ft_print_error(void);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	if (ft_check_param(argv[1]))
		validation_game(argv[1]);
	else
		ft_print_error();
	return (0);
}
