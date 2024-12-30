/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othman <othman@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 12:33:05 by othman            #+#    #+#             */
/*   Updated: 2024-12-30 12:33:05 by othman           ###   ########.fr       */
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
		return (0);
	ft_checker(&stack_a, &stack_b);
}