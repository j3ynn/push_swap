/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:56:36 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 15:55:00 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	apply_rot_a(t_stack *a, int rot)
{
	while (rot < 0)
	{
		rra(a, 1);
		rot++;
	}
	while (rot > 0)
	{
		ra(a, 1);
		rot--;
	}
}

void	apply_rot_b(t_stack *b, int rot)
{
	while (rot < 0)
	{
		rrb(b, 1);
		rot++;
	}
	while (rot > 0)
	{
		rb(b, 1);
		rot--;
	}
}

int	calculate_min_rot_b(t_stack *b, int num)
{
	int	i;

	i = 0;
	while (i < b->size)
	{
		if (b->stack[i] == num)
			break ;
		i ++;
	}
	if (i < module(i - b->size))
		return (i);
	return (i - b->size);
}

int	calculate_min_rot_a(t_stack *a, int num)
{
	int	i;
	int	index;

	i = 0;
	index = index_min(a);
	while (i < a->size)
	{
		if (a->stack[index] > num)
			break ;
		index++;
		if (index == a->size)
			index = 0;
		i ++;
	}
	if (index < module(index - a->size))
		return (index);
	return (index - a->size);
}
