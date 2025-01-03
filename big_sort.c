/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:30:00 by oachbani          #+#    #+#             */
/*   Updated: 2025/01/03 14:55:57 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_increment(int *start, int *end, int size)
{
	if (*start < *end)
		(*start)++;
	if (size - 1 > *end)
		(*end)++;
}

void	push_rotate(t_stack **a, t_stack **b)
{
	push_b(b, a);
	if (stack_size(*b) > 1)
		rotate_b(b);
}

void	push_check_swap(t_stack **a, t_stack **b)
{
	push_b(b, a);
	if (stack_size(*b) > 1 && (*b)->next->num > (*b)->num)
		swap_b(b);
}

void	big_sort(t_stack **a, t_stack **b, int *end)
{
	int	*arr;
	int	start;
	int	size;

	size = stack_size(*a);
	arr = fill_the_array(*a);
	start = 0;
	while (*a)
	{
		if ((*a)->num <= arr[start])
		{
			push_rotate(a, b);
			ft_increment(&start, end, size);
		}
		else if ((*a)->num <= arr[*end])
		{
			push_check_swap(a, b);
			ft_increment(&start, end, size);
		}
		else
			rotate_a(a);
	}
	free(arr);
	big_sort_final(a, b);
}

void	big_sort_final(t_stack **a, t_stack **b)
{
	int	size;
	int	max;

	while (*b)
	{
		size = stack_size(*b);
		max = find_max_index(*b);
		if (max == 0)
			push_a(a, b);
		else if (max <= size / 2)
		{
			while (find_max_index(*b) != 0)
				rotate_b(b);
		}
		else
		{
			while (find_max_index(*b) != 0)
				rrotate_b(b);
		}
	}
}
