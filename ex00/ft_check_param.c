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