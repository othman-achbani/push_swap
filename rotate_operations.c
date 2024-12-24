/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:00:04 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/24 11:09:36 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*a) || !(*a)->next)
		return ;
	first = (*a);
	last = (*a);
	while (last->next)
		last = last->next;
	(*a) = first->next;
	last->next = first;
	first->next = NULL;
}

void	rotate_a(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rotate_ab(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
