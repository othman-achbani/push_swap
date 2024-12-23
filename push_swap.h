/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:10:21 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/22 19:26:37 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdint.h>
# include<stdio.h>
typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}t_stack;

long	ft_atoi(const char *str);
void	free_split(char **arr);
void	ft_stackadd_back(t_stack **lst, int num);
int		ft_max(long num);
int		check(char *str);
int		check_repeat(t_stack *a);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t num, size_t size);
#endif