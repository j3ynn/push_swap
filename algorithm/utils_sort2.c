/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:50:31 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 15:52:49 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	module(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}

int	check_sort(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->stack[i] > a->stack[i + 1])
			return (0);
		i ++;
	}
	return (1);
}

int	index_min(t_stack *a)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (i < a->size)
	{
		if (a->stack[i] < a->stack[temp])
			temp = i;
		i ++;
	}
	return (temp);
}
