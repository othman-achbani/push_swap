/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:47:12 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/21 18:47:14 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(long num)
{
	if (num > INT_MAX || num < INT_MIN)
	{
		write(2, "error\n", 6);
		return (0);
	}
	return (1);
}

int	check(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+' )
	{
		i++;
		if (!str[i])
		{
			write(2, "error\n", 6);
			return (0);
		}
		while (ft_isdigit(str[i]))
			i++;
		if (!str[i])
			return (1);
	}
	while (ft_isdigit(str[i]))
		i++;
	if (!str[i])
		return (1);
	else
	{
		write(2, "error\n", 6);
		return (0);
	}
}