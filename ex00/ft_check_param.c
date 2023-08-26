/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:12:08 by dadantas          #+#    #+#             */
/*   Updated: 2023/08/26 18:13:12 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_param(char *param)
{
	int	index;

	index = 0;
	while (param[index])
	{
		if (index % 2 == 0)
		{
			if (!(param[index] >= '1' && param[index] <= '4'))
				return (0);
		}
		else if (param[index] != ' ')
			return (0);
		index++;
	}
	if (index != 31)
		return (0);
	return (1);
}
