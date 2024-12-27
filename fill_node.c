/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:25:36 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/27 10:16:34 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = (*lst);
	(*lst) = new;
}
