/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 21:41:01 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/26 22:52:39 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_the_array(t_stack **a)
{
	int	i;
	int	size;
	int	*arr;

	size = stack_size(*a);
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (*a)
	{
		arr[i] = (*a)->num;
		(*a)= (*a)->next;
		i++;
	}
	sort_array(arr, i);
	return (arr);
}

void sort_array(int *arr , int size)
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
}

void	give_the_index(t_stack **a ,int size)
{
	int	*arr;
	int	i;

	arr = fill_the_array(a);
	while (*a)
	{
		i = 0;
		while (i < size)
		{
			if ((*a)->num == arr[i])
			{
				(*a)->index = i;
				break ;
			}
			i++;
		}
		(*a) = (*a)->next;
	}
}
