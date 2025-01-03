/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:11:24 by oachbani          #+#    #+#             */
/*   Updated: 2025/01/03 14:52:44 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	add_to_stack(int ac, char **av, t_stack **a)
{
	char	**fake_num;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fake_num = NULL;
	while (++i < ac)
	{
		j = 0;
		fake_num = ft_split(av[i], ' ');
		while (fake_num[j])
		{
			if (!check(fake_num[j]) || !ft_max(ft_atoi(fake_num[j])))
				return (free_split(fake_num), 0);
			else
				ft_stackadd_back(a, (int)ft_atoi(fake_num[j]));
			j++;
		}
		free_split(fake_num);
	}
	return (1);
}

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
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!null_check(ac, av) || !check_spaces(ac, av) || \
	!add_to_stack(ac, av, &stack_a) || !check_repeat(stack_a))
	{
		return (free_list (stack_a), write(2, "Error\n", 6), 1);
	}
	if (is_sorted(stack_a))
		return (free_list(stack_a), 0);
	sort_type_check(&stack_a, &stack_b);
	free_list (stack_a);
	free_list (stack_b);
}
