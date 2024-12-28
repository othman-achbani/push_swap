/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:30:00 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/27 12:09:33 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	push_rotate(t_stack **a ,t_stack **b)
{
		push_b(b, a);
		if ((*b)->next && (*b)->num < (*b)->next->num)
		rotate_b(b);
}

void	push_check_swap(t_stack **a, t_stack **b)
{
		push_b(b, a);
		if((*b)->next && (*b)->num < (*b)->next->num)
			swap_b(b);
}

void	big_sort(t_stack **a, t_stack **b)
{
	int *arr;
	int start;
	int	end;

	end = get_chunks(*a);
	arr = fill_the_array(*a);
	start = 0;
	while (*a)
	{
		if ((*a)->num <= arr[start])
		{
			push_rotate(a, b);
			start++;
			end++;
		}
		else if((*a)->num <= arr[end])
		{
			push_check_swap(a, b);
			start++;
			end++;
		}
		else
		rotate_a(a);
	}
	big_sort_final(a, b);
}

void	big_sort_final(t_stack **a,t_stack **b)
{
	int	size;
	int	max;

	while (*b)
	{
		size = stack_size(*b);
		max = find_max_index(*b);
		if ( max == 0)
			push_a(a, b);
		else if (find_max_index(*b) >= size / 2)
		{
			while(find_max_index(*b) != 0)
				rrotate_a(b);
		}
		else if (find_max_index(*b) <= size / 2)
		{
			while (find_max_index(*b) != 0)
				rotate_a(b);
		}
	}
}