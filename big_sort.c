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
		rotate_b(b);
}

void	push_check_swap(t_stack **a, t_stack **b)
{
		push_b(b, a);
		if((*b)->num < (*b)->next->num)
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
	if (is_sorted(*a))
		exit(0);
	
		
}