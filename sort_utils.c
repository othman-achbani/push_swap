/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 17:50:25 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/26 11:59:20 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	if (!a || !a->next)
		return (1);
	while (a->next)
	{
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->num;
	b = (*stack)->next->num;
	c = (*stack)->next->next->num;
	if (a > b && a < c)
		swap_a(stack);
	else if (a > b && b < c)
		rotate_a(stack);
	else if (a < b && a < c)
	{
		rrotate_a(stack);
		swap_a(stack);
	}
	else if (a < b && b > c)
		rrotate_a(stack);
	else if (a > b && b > c)
	{
		rrotate_a(stack);
		rrotate_a(stack);
		swap_a(stack);
	}
}
