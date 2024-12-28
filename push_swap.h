/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:10:21 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/27 11:50:46 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

int					*fill_the_array(t_stack *a);
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
void				push_b(t_stack **b, t_stack **a);
void				rotate_a(t_stack **a);
void				rotate_b(t_stack **b);
void				rotate_ab(t_stack **a, t_stack **b);
void				rrotate_a(t_stack **a);
void				rrotate_b(t_stack **b);
void				rrotate_ab(t_stack **a, t_stack **b);
int					is_sorted(t_stack *a);
void				sort_type_check(t_stack **a, t_stack **b);
void				sort_three(t_stack **stack);
int					stack_size(t_stack *a);
int					find_small_index(t_stack *stack);
void				sort_four(t_stack **stack_a, t_stack **stack_b);
void				sort_five(t_stack **a, t_stack**b);
void				give_the_index(t_stack **a ,int size);
int					get_chunks(t_stack *a);
int					find_max_index(t_stack *b);
void				big_sort(t_stack **a, t_stack **b);
void				big_sort_final(t_stack **a,t_stack **b);
#endif