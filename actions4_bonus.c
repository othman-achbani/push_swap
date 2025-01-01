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

#include "push_swap_bonus.h"

void	rrotate(t_stack **a)
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
}

void	rrotate_b(t_stack **b)
{
	rrotate(b);
}

void	rrotate_ab(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
}
