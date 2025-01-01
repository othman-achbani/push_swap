/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-01 18:29:08 by oachbani          #+#    #+#             */
/*   Updated: 2025-01-01 18:29:08 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

int					stack_size(t_stack *a);
void				*ft_calloc(size_t num, size_t size);
int					add_to_stack(int ac, char **av, t_stack **a);
long				ft_atoi(const char *str);
void				free_split(char **arr);
void				ft_stackadd_back(t_stack **lst, int num);
int					ft_max(long num);
int					check(char *str);
int					check_repeat(t_stack *a);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
int					is_sorted(t_stack *a);
int					null_check(int ac, char **av);
int					checking(char *line, t_stack **a, t_stack **b);
void				rrotate_a(t_stack **a);
void				rrotate_ab(t_stack **a, t_stack **b);
void				rrotate_b(t_stack **b);
void				swap_ab(t_stack **a, t_stack **b);
void				swap_b(t_stack **a);
void				swap_a(t_stack **a);
void				rotate_a(t_stack **a);
void				rotate_b(t_stack **b);
void				rotate_ab(t_stack **a, t_stack **b);
void				push(t_stack **dest, t_stack **src);
void				push_a(t_stack **a, t_stack **b);
void				push_b(t_stack **b, t_stack **a);
char				*get_next_line(int fd);
char				*ft_strchr(char *str, int c);
char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(char *s);

#endif