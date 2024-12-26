/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:15:09 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/26 17:30:51 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	if (!(*a) || !(*a)->next)
		return ;
	first = *a;
	last = first;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = first;
	*a = tmp;
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
