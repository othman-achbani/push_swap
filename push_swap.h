/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:10:21 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/24 15:18:13 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

long				ft_atoi(const char *str);
void				free_split(char **arr);
void				ft_stackadd_back(t_stack **lst, int num);
int					ft_max(long num);
int					check(char *str);
int					check_repeat(t_stack *a);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
void				swap_a(t_stack **a);
void				*ft_calloc(size_t num, size_t size);
void				swap_b(t_stack **a);
void				swap_ab(t_stack **a, t_stack **b);
void				push_a(t_stack **a, t_stack **b);
void				push_b(t_stack **a, t_stack **b);
void				rotate_a(t_stack **a);
void				rotate_b(t_stack **b);
void				rotate_ab(t_stack **a, t_stack **b);
void				rrotate_a(t_stack **a);
void				rrotate_b(t_stack **b);
void				rrotate_ab(t_stack **a, t_stack **b);

#endif