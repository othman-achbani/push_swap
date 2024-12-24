/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:52:57 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/24 10:52:02 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
}

void	push_a(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	push_b(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pb\n", 3);
}
