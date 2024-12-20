/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:11:24 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/20 12:06:36 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	check_repeat(int *av, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (av[i] == av[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int check_realnumber(char *str)
{
	int i;

	i = 0;
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i]== '+')
	{
		i++;
		while (ft_isdigit(str[i]))
			i++;
		if (!str[i])
			return(1);
	}
	if (!str[i])
		return(1);
	else
		return (0);

}
int	main(int ac, char **av)
{
	char	**fake_num;
	int		i;
	int		x;
	int		*real_num;
	int		n;

	i = 0;
	x = 0;
	n = 0;
	while (++i < ac)
	{
		x = 0;
		fake_num = ft_split(av[i], ' ');
		while (fake_num[x])
		{
			if (!check_realnumber(fake_num[x]));
			return (0);
			real_num[n++] = ft_atoi(fake_num[x]);
			x++;
		}
		free_split(fake_num);
	}
	if (!check_repeat(real_num, n))
		write(1, "error\n", 6);
}
