/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othman <othman@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 12:04:30 by othman            #+#    #+#             */
/*   Updated: 2024-12-30 12:04:30 by othman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_stack **a)
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

void	rotate_a_b(t_stack **a)
{
	rotate_b(a);
}

void	rotate_b_b(t_stack **b)
{
	rotate_b(b);
}

void	rotate_ab_b(t_stack **a, t_stack **b)
{
	rotate_b(a);
	rotate_b(b);
}
