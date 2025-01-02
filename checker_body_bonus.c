/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_body_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:22:03 by oachbani          #+#    #+#             */
/*   Updated: 2025/01/02 16:39:09 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2 [i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	checking(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp("ra\n", line) == 0)
		rotate_a(a);
	else if (ft_strcmp("rb\n", line) == 0)
		rotate_b(b);
	else if (ft_strcmp("rr\n", line) == 0)
		rotate_ab(a, b);
	else if (ft_strcmp("sa\n", line) == 0)
		swap_a(a);
	else if (ft_strcmp("sb\n", line) == 0)
		swap_b(b);
	else if (ft_strcmp("pa\n", line) == 0)
		push_a(a, b);
	else if (ft_strcmp("pb\n", line) == 0)
		push_b(b, a);
	else if (ft_strcmp("rra\n", line) == 0)
		rrotate_a(a);
	else if (ft_strcmp("rrb\n", line) == 0)
		rrotate_b(b);
	else if (ft_strcmp("rrr\n", line) == 0)
		rrotate_ab(a, b);
	else
		return (0);
	return (1);
}
