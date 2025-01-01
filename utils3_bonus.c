/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 15:08:16 by oachbani          #+#    #+#             */
/*   Updated: 2024-12-30 15:08:16 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_the_array(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_repeat(t_stack *a)
{
	int	i;
	int	size;
	int	*arr;

	size = stack_size(a);
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (a)
	{
		arr[i] = a->num;
		a = a->next;
		i++;
	}
	if (!check_the_array(arr, i))
		return (0);
	free (arr);
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

int	add_to_stack(int ac, char **av, t_stack **a)
{
	char	**fake_num;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fake_num = NULL;
	while (++i < ac)
	{
		j = 0;
		fake_num = ft_split(av[i], ' ');
		while (fake_num[j])
		{
			if (!check(fake_num[j]) || !ft_max(ft_atoi(fake_num[j])))
				return (free_split(fake_num), 0);
			else
				ft_stackadd_back(a, (int)ft_atoi(fake_num[j]));
			j++;
		}
		free_split(fake_num);
	}
	return (1);
}

int	stack_size(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}
