/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_type_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:56:34 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/27 10:31:00 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	get_chunks(int size)
{
	if (size <= 100)
		return (size / 7);
	else
		return (size / 14);
}

void	sort_type_check(t_stack **a, t_stack **b)
{
	int	size;
	int	end;

	size = stack_size(*a);
	end = get_chunks(size);
	if (size == 2)
		swap_a(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		big_sort(a, b, &end);
}
