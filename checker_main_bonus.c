/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:22:24 by oachbani          #+#    #+#             */
/*   Updated: 2025/01/02 14:17:30 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_list(t_stack *head)
{
	t_stack	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

int	check_spaces(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		if (!av[i][j])
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*line;

	stack_a = NULL;
	stack_b = NULL;
	if (!null_check (ac, av) || !check_spaces(ac, av) || \
	!add_to_stack(ac, av, &stack_a) || !check_repeat(stack_a))
		return (free_list(stack_a), write(2, "Error\n", 6), 1);
	if (is_sorted(stack_a))
		return (free_list (stack_a), write(1, "OK\n", 3), 0);
	line = get_next_line(0);
	while (line)
	{
		if (!checking(line, &stack_a, &stack_b))
			return (free_list(stack_a), free_list(stack_b) \
				, write(2, "Error\n", 6), 1);
		line = get_next_line(0);
	}
	if (is_sorted(stack_a) && !stack_b)
		return (free_list(stack_a), write(1, "OK\n", 3), 0);
	else
		write(1, "KO\n", 3);
	free_list(stack_a);
	free_list(stack_b);
}
