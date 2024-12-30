/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 14:22:24 by oachbani          #+#    #+#             */
/*   Updated: 2024-12-30 14:22:24 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac , char **av)
{
    t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!add_to_stack(ac, av, &stack_a) || !check_repeat(stack_a))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (is_sorted(stack_a))
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	ft_checker(&stack_a, &stack_b);
	if (is_sorted(stack_a))
		write(1, "OK\n", 3);
	else if (!is_sorted(stack_a))
		write(1, "KO\n", 3);
}