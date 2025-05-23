/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:19:22 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 15:58:11 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_number(t_stack *a, char *str)
{
	int		i;
	int		sign;
	long	num;

	if (ft_strlen(str) == 0)
		return (0);
	num = 0;
	sign = 1;
	i = 0;
	signs(str[i], &sign, &i);
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		num = (num * 10) + str[i] - '0';
		if (!max_min(num * sign))
			return (0);
		i++;
	}
	num *= sign;
	return (check_duplicate(a, (int)num));
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

int	check_duplicate(t_stack *a, int num)
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
