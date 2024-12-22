/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:47:12 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/22 13:45:13 by oachbani         ###   ########.fr       */
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
	if (str[i] == '-' || str[i] == '+' )
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
int check_the_array(int *arr , int n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	check_repeat(t_stack *a)
{
	int		i;
	int		j;
	int		*arr;

	i = 0;
	j = 0;
	while (a)
	{
		arr[i] = a -> num;
		a = a -> next;
		i++;
	}
	if (!check_the_array(arr ,i))
		return (0);
}