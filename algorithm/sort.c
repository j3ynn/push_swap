/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:12:05 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/22 19:40:15 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack *a, t_stack *b)
{
	while (a->size > 3)
		pb(a, b);
	sort_three(a);
	while (b->size > 0)
		push(a, b);
	apply_rot_a(a, calculate_min_rot_a(a, a->stack[index_min(a)]));
}

void	sort_three(t_stack *a)
{
	if (a->size == 3)
	{
		if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2])
			ra(a, 1);
		else if (a->stack[1] > a->stack[0] && a->stack[1] > a->stack[2])
			rra(a, 1);
		if (a->stack[0] > a->stack[1])
			sa(a, 1);
	}
}

void	push(t_stack *a, t_stack *b)
{
	int	econum;
	int	rotate_a;
	int	rotate_b;

	econum = get_econum(a, b);
	rotate_a = calculate_min_rot_a(a, b->stack[econum]);
	rotate_b = calculate_min_rot_b(b, b->stack[econum]);
	apply_rot_a(a, rotate_a);
	apply_rot_b(b, rotate_b);
	printf("%i %i", rotate_a, rotate_b);
	pa(a, b);
}

int	get_econum(t_stack *a, t_stack *b)
{
	int	eco;
	int	i;
	int	temp;
	int	index;

	i = 0;
	eco = INT_MAX;
	while (i < b->size)
	{
		temp = 0;
		temp += module(calculate_min_rot_a(a, b->stack[i]));
		temp += module(calculate_min_rot_b(b, b->stack[i]));
		if (temp < eco)
		{
			eco = temp;
			index = i;
		}
		i ++;
	}
	return (index);
}

int	check_sort(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if(a->stack[i] > a->stack[i + 1])
			return (0);
		i ++;
	}
	return (1);
}