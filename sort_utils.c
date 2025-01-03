/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 17:50:25 by oachbani          #+#    #+#             */
/*   Updated: 2025/01/03 14:49:27 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	if (!a || !a->next)
		return (1);
	while (a->next)
	{
		if (a->next)
		{
			if (a->num > a->next->num)
				return (0);
		}
		a = a->next;
	}
	return (1);
}

int	null_check(int ac, char **av)
{
	int	i;

	if (ac == 1)
		exit (0);
	i = 0;
	while (++i < ac)
	{
		if (av[i][0] == '\0')
			return (0);
	}
	return (1);
}

void	sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->num;
	b = (*stack)->next->num;
	c = (*stack)->next->next->num;
	if (a > b && a < c)
		swap_a(stack);
	else if (a > b && b < c)
		rotate_a(stack);
	else if (a < b && a < c)
	{
		rrotate_a(stack);
		swap_a(stack);
	}
	else if (a < b && b > c)
		rrotate_a(stack);
	else if (a > b && b > c)
	{
		rrotate_a(stack);
		rrotate_a(stack);
		swap_a(stack);
	}
}

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int		small_index;

	small_index = find_small_index(*stack_a);
	if (small_index == 1)
		rotate_a(stack_a);
	else if (small_index == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (small_index == 3)
		rrotate_a(stack_a);
	if (is_sorted(*stack_a))
		return ;
	push_b(stack_b, stack_a);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_five(t_stack **a, t_stack**b)
{
	int	small_index;

	small_index = find_small_index(*a);
	if (small_index == 1)
		rotate_a(a);
	else if (small_index == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (small_index == 3)
	{
		rrotate_a(a);
		rrotate_a(a);
	}
	else if (small_index == 4)
		rrotate_a(a);
	if (is_sorted(*a))
		exit(0);
	push_b(b, a);
	sort_four(a, b);
	push_a(a, b);
}
