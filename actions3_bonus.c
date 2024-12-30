/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othman <othman@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 12:04:57 by othman            #+#    #+#             */
/*   Updated: 2024-12-30 12:04:57 by othman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!*a || !(*a)->next)
		return ;
	first = (*a);
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	(*a) = second;
}

void	swap_a_b(t_stack **a)
{
	swap_b(a);
}

void	swap_b_b(t_stack **a)
{
	swap_b(a);
}

void	swap_ab_b(t_stack **a, t_stack **b)
{
	swap_b(a);
	swap_b(b);
}
