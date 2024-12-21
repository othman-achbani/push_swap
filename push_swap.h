/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:10:21 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/21 09:52:06 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdint.h>

typedef struct s_stack
{
	int				num;
	int				pos;
	int				target_pos;
	int 			f_rank;
	int				cost_stack_a;
	int 			cost_stack_b;
	struct s_stack	*next;
}t_stack;

void	free_split(char **arr);
int		check_repeat(long *av, int n);

#endif