/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:11:24 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/21 19:53:39 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_repeat(long *av, int n)
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

void	fill_the_stack(int *real_num,int size)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	int i;

	i = -1;
	while (++i < size)
		ft_stackadd_back(&stack_a, real_num[i],i);
	
}

int	main(int ac, char **av)
{
	char	**fake_num;
	int		i;
	int		x;
	int		n;
	long	*real_num;

	i = 0;
	n = 0;
	while (++i < ac)
	{
		x = -1;
		fake_num = ft_split(av[i], ' ');
		while (fake_num[++x])
		{
			if (!check(fake_num[x]) || !ft_max(ft_atoi(fake_num[x])))
				return (free_split(fake_num),0);
			real_num[n++] = ft_atoi(fake_num[x]);
		}
		free_split(fake_num);
	}
	if (!check_repeat(real_num, n))
		write(2, "error\n", 6);
	fill_the_stack(real_num,n);
}
