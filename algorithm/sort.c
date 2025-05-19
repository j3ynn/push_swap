/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:12:05 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/16 17:32:03 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack *a, t_stack *b)
{
	while (a->size > 3)
		pb(a, b);
	sort_three(a);
	/*while (b->len > 0)
		smart_push(a, b);
	apply_rot(a, get_min_rot(a, a->nums[get_min_num_index(a)], 1));*/
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