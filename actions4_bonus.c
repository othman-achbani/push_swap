/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions4_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othman <othman@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 12:06:21 by othman            #+#    #+#             */
/*   Updated: 2024-12-30 12:06:21 by othman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_b(t_stack **a)
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

void	rrotate_a_b(t_stack **a)
{
	rrotate_b(a);
}

void	rrotate_b_b(t_stack **b)
{
	rrotate_b(b);
}

void	rrotate_ab_b(t_stack **a, t_stack **b)
{
	rrotate_b(a);
	rrotate_b(b);
}
