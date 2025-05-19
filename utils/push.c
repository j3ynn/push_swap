/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:28:07 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/16 16:16:13 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int t;

	if (b->size > 0)
	{
		t = a->size;
		while (t--)
			a->stack[t + 1] = a->stack[t];
		a->stack[0] = b->stack[0];
		a->size += 1;
		t = 1;
		while (1 < b->size)
		{
			b->stack[t - 1] = b->stack[t];
			t ++;
		}
		b->size -= 1;
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int t;

	if (a->size > 0)
	{
		t = b->size;
		while (t--)
			b->stack[t + 1] = b->stack[t];
		b->stack[0] = a->stack[0];
		b->size += 1;
		t = 1;
		while (1 < a->size)
		{
			a->stack[t - 1] = a->stack[t];
			t ++;
		}
		a->size -= 1;
	}
	write(1, "pb\n", 3);
}
void	ra(t_stack *a, int flag)
{
	int	t;
	int	i;

	i = 1;
	t = a->stack[0];
	while(i < a->size)
	{
		a->stack[i - 1] = a->stack[i];
		i++;
	}
	a->stack[i] = t;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b, int flag)
{
	int	t;
	int	i;

	i = 1;
	t = b->stack[0];
	while(i < b->size)
	{
		b->stack[i - 1] = b->stack[i];
		i++;
	}
	b->stack[i] = t;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}