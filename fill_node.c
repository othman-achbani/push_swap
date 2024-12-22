/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:25:36 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/22 11:02:56 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int content,int i)
{
	t_stack	*head;

	head = (t_stack *)malloc (sizeof(t_stack));
	if (!head)
		return (NULL);
	head -> num = content;
	head -> pos = i;
	head -> next = NULL;
	return (head);
}
void	ft_stackadd_back(t_stack **lst, int num,int i)
{
	t_stack	*current;
	t_stack	*new;

	new = ft_stacknew(num, i);
	if (!lst || !new)
		return ;
	current = (*lst);
	if (!current)
	{
		*lst = new;
		return ;
	}
	while (current -> next)
		current = current -> next;
	current -> next = new;
}
