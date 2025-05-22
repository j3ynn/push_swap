/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:20:23 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/22 18:59:23 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*stack;
	int	size;
}	t_stack;

void	sa(t_stack *a, int flag);
void	sb(t_stack *b, int flag);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a, int flag);
void	rb(t_stack *b, int flag);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a, int flag);
void	rrb(t_stack *b, int flag);
void	rrr(t_stack *a, t_stack *b);

void	ft_free_strs(char **strs);
void	signs(char c, int *sign, int *index);
void	sort_three(t_stack *a);
void	int_cat(t_stack *a, int num);
void	apply_rot_a(t_stack *a, int rot);
void	apply_rot_b(t_stack *b, int rot);
void	push(t_stack *a, t_stack *b);
void	sort(t_stack *a, t_stack *b);

int		parse_args(t_stack *a,int ac, char **av);
int		parse_one_arg(t_stack *a, char **numbers);
int		check_number(t_stack *a, char *num);
int		check_duplicate(t_stack *a,int num);
int		max_min(long num);
int		index_min(t_stack *a);
int		calculate_min_rot_b(t_stack *b, int num);
int		calculate_min_rot_a(t_stack *a, int num);
int		module(int n);
int		get_econum(t_stack *a, t_stack *b);
int		check_sort(t_stack *a);


#endif