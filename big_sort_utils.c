/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 21:41:01 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/27 11:50:23 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_array(int *arr, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*fill_the_array(t_stack *a)
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
	arr = sort_array(arr, size);
	return (arr);
}

int	find_max_index(t_stack *b)
{
	int	max;
	int	index;
	int	max_index;

	if (!b)
		exit (0);
	index = 0;
	max = b->num;
	max_index = 0;
	while (b)
	{
		if (max < b->num)
		{
			max = b->num;
			max_index = index;
		}
		index++;
		b = b->next;
	}
	return (max_index);
}
