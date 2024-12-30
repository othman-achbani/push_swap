/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_body_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-30 14:22:03 by oachbani          #+#    #+#             */
/*   Updated: 2024-12-30 14:22:03 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ( s1[i] && s2 [i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    checking(char *line, t_stack **a, t_stack **b)
{
    if (ft_strcmp(line, "pa\n") == 0)
        push_a_b(a, b);
    else if (ft_strcmp(line, "pb\n") == 0)
        push_b_b(b, a);
    else if (ft_strcmp(line, "rra\n") == 0)
        rrotate_a_b(a);
    else if (ft_strcmp(line, "rrb\n") == 0)
        rrotate_b_b(b);
    else if (ft_strcmp(line, "rrr\n") == 0)
        rrotate_ab_b(a, b);
    else
    {
        write (2, "Error\n", 7);
        exit (1);
    }
}

void    ft_checker(t_stack **a, t_stack **b)
{
    char *line;

    line = get_next_line(0);
    while (line)
    {
        if (ft_strcmp(line, "ra\n") == 0)
            rotate_a_b(a);
        else if (ft_strcmp(line, "rb\n") == 0)
            rotate_b_b(a);
        else if (ft_strcmp(line, "rr\n") == 0)
            rotate_ab_b(a, b);
        else if (ft_strcmp(line, "sa\n") == 0)
            swap_a_b(a);
        else if (ft_strcmp(line, "sb\n") == 0)
            swap_b_b(b);
        else
            checking(line , a, b);
        line = get_next_line(0);
    }
}