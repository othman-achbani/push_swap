/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:15:09 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/24 15:17:46 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*a) || !(*a)->next)
		return ;
	first = (*a);
	last = (*a);
	while (last->next)
		last = last->next;
	last->next = first;
	(*a) = first->next;
	first->next = NULL;
}

void	rrotate_a(t_stack **a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrotate_b(t_stack **b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrotate_ab(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
