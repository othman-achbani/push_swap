/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:54:02 by oachbani          #+#    #+#             */
/*   Updated: 2024/12/24 15:17:49 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static char	*ft_stralloc(char const *str, char c)
{
	int		i;
	char	*p;
	int		x;

	i = ft_len(str, c);
	p = (char *)ft_calloc((i + 1), sizeof(char));
	if (!p)
		return (NULL);
	x = -1;
	while (++x < i)
		p[x] = str[x];
	return (p);
}

static int	count_words(char const *str, char c)
{
	int	word;
	int	count;
	int	i;

	word = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			word = 0;
		else
		{
			if (word == 0)
				count++;
			word = 1;
		}
		i++;
	}
	return (count);
}

static void	ft_free(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;

	if (!s)
		return (NULL);
	p = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		p[i] = ft_stralloc(s, c);
		if (!p[i++])
		{
			ft_free(p);
			return (NULL);
		}
		while (*s != c && *s)
			s++;
	}
	return (p);
}
