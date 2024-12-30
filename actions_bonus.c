/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othman <othman@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 12:03:27 by othman            #+#    #+#             */
/*   Updated: 2024-12-30 12:03:27 by othman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
}

void	push_a_b(t_stack **a, t_stack **b)
{
	push_b(a, b);
}

void	push_b_b(t_stack **b, t_stack **a)
{
	push_b(b, a);
}
