/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:34:44 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 15:56:55 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a, int flag)
{
	int	t;
	int	i;

	t = a->stack[a->size - 1];
	i = a->size - 2;
	while (i >= 0)
	{
		a->stack[i + 1] = a->stack[i];
		i --;
	}
	a->stack[0] = t;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b, int flag)
{
	int	t;
	int	i;

	t = b->stack[b->size - 1];
	i = b->size - 2;
	while (i >= 0)
	{
		b->stack[i + 1] = b->stack[i];
		i --;
	}
	b->stack[0] = t;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 3);
}
