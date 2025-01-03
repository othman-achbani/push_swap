/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:03:27 by othman            #+#    #+#             */
/*   Updated: 2025/01/03 14:47:50 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
}

void	push_b(t_stack **b, t_stack **a)
{
	push(b, a);
}

int	null_check(int ac, char **av)
{
	int	i;

	if (ac == 1)
		exit(0);
	i = 0;
	while (++i < ac)
	{
		if (av[i][0] == '\0')
			return (0);
	}
	return (1);
}
