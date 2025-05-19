/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:19:22 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/16 15:28:40 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//da modificare (copiato eheheheeh)

int	check_number(t_stack *a, char *num)
{
	int		i;
	long	value;
	int		sign;

	if (ft_strlen(num) == 0)
		return (0);
	value = 0;
	sign = 1;
	i = 0;
	signs(num[i], &sign, &i);
	if (!ft_isdigit(num[i]))
		return (0);
	while (num[i] != '\0')
	{
		if (!ft_isdigit(num[i]))
			return (0);
		value = (value * 10) + num[i] - '0';
		if (!max_min(value * sign))
			return (0);
		i++;
	}
	value *= sign;
	return (check_duplicate(a, (int)value));
}

void	signs(char c, int *sign, int *index)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*sign *= -1;
		(*index)++;
	}
}

int	max_min(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

int	check_duplicate(t_stack *a,int num)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (num == a->stack[i])
			return (0);
		i++;
	}
	return (1);
}