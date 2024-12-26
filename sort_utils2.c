/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:52:31 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/26 17:30:10 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_small_index(t_stack *stack)
{
	int	i;
	int	small_index;
	int	inum;
	int	small_value;

	small_value = INT_MAX;
	i = 0;
	small_index = 0;
	while (stack)
	{
		if (stack->num < small_value)
		{
			small_value = stack->num;
			small_index = i;
		}
		i++;
		stack = stack->next;
	}
	return (small_index);
}
