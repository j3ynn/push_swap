/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:28:07 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 16:01:31 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	if (b->size == 0)
		return ;
	i = a->size -1;
	while (i >= 0)
	{
		a->stack[i + 1] = a->stack[i];
		i --;
	}
	a->stack[0] = b->stack[0];
	i = 1;
	while (i < b->size)
	{
		b->stack[i - 1] = b->stack[i];
		i++;
	}
	a->size ++;
	b->size --;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	if (a->size == 0)
		return ;
	i = b->size -1;
	while (i >= 0)
	{
		b->stack[i + 1] = b->stack[i];
		i --;
	}
	b->stack[0] = a->stack[0];
	i = 1;
	while (i < a->size)
	{
		a->stack[i - 1] = a->stack[i];
		i++;
	}
	b->size ++;
	a->size --;
	write(1, "pb\n", 3);
}

void	ra(t_stack *a, int flag)
{
	int	t;
	int	i;

	i = 1;
	t = a->stack[0];
	while (i < a->size)
	{
		a->stack[i - 1] = a->stack[i];
		i++;
	}
	a->stack[i - 1] = t;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b, int flag)
{
	int	t;
	int	i;

	i = 1;
	t = b->stack[0];
	while (i < b->size)
	{
		b->stack[i - 1] = b->stack[i];
		i++;
	}
	b->stack[i - 1] = t;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
