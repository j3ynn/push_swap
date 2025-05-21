/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:56:36 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/19 17:26:35 by jbellucc         ###   ########.fr       */
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

int	calculate_min_rot(t_stack *stack, int num, int flag)
{
	int	indx;
	int	i;

	if (!flag)
		indx = index_min(stack);
	else
		indx = 0;
	i = 0;
	while (i < stack->size)
	{
		if (num < stack->stack[indx] && !flag)
			break ;
		if (num == stack->stack[indx] && flag)
			break ;
		i++;
		indx++;
		if (indx == stack->size)
			indx = 0;
	}
	if ((indx - stack->size > 0 && indx < indx - stack->size)
				|| (indx - stack->size < 0 && indx < stack->size - indx))
		return (indx);
	else
		return (indx - stack->size);
}

int	index_min(t_stack *stack)
{
	int	i;
	int temp;

	temp = 0;
	i = 0;
	while (i < stack->size)
	{
		if (stack->stack[i] < stack->stack[temp])
			temp = i;
		i ++;
	}
	return (temp);
}
