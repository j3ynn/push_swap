/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:17:13 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 15:57:32 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a, int flag)
{
	int	t;

	t = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = t;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *b, int flag)
{
	int	t;

	t = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[0] = t;
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
