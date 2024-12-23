/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:25:38 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/23 10:15:41 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*first;
	t_stack *second;

	if (!*a || !(*a) -> next)
		return ;
	first = (*a);
	second = (*a) ->next;
	first->next = second->next;
	second->next = first;
	(*a) = second;
}

void swap_a(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void swap_b(t_stack **a)
{
	swap(a);
	write(1, "sb\n", 3);
}

void swap_ab(t_stack **a , t_stack **b)
{
	swap(a);
	write(1, "ss\n", 3);
}