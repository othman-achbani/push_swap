/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 15:03:05 by oachbani          #+#    #+#             */
/*   Updated: 2024-12-30 15:03:05 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

int	check(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!str[i])
			return (0);
		while (ft_isdigit(str[i]))
			i++;
		if (!str[i])
			return (1);
	}
	while (ft_isdigit(str[i]))
		i++;
	if (!str[i])
		return (1);
	else
		return (0);
}
static t_stack	*ft_stacknew(int content)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->num = content;
	head->next = NULL;
	return (head);
}

void	ft_stackadd_back(t_stack **lst, int num)
{
	t_stack	*current;
	t_stack	*new;

	new = ft_stacknew(num);
	if (!lst || !new)
		return ;
	current = (*lst);
	if (!current)
	{
		*lst = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

int	is_sorted(t_stack *a)
{
	if (!a || !a->next)
		return (1);
	while (a->next)
	{
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
}