/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:11:24 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/26 12:00:11 by oachbani         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!add_to_stack(ac, av, &stack_a) || !check_repeat(stack_a))
	{
		write(2, "error\n", 6);
		exit(1);
	}
	if (is_sorted(stack_a))
		return (0);
	sort_type_check(&stack_a);
}
