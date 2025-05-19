/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:56:36 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/16 17:27:33 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	parse_args(t_stack *a,int ac, char **av)
{
	int		i;
	char	**temp;

	i = 1;
	while (i < ac)
	{
		temp = ft_split(av[i], ' ');
		if (!parse_one_arg(a, temp))
		{
			ft_free_strs(temp);
			return (0);
		}
		i ++;
		ft_free_strs(temp);
	}
	return (1);	
}

int	parse_one_arg(t_stack *a, char **numbers)
{
	int	i;
	int	number;

	i = 0;
	while (numbers[i] != NULL)
	{
		if(!check_number(a, numbers[i]))
			return (0);
		number = ft_atoi(numbers[i]);
		int_cat(a, number);
		i ++;
	}
	return (1);
}

void	int_cat(t_stack *a, int num)
{
	int i;
	int *new_stack;

	i = 0;
	new_stack = ft_calloc(a->size + 1, sizeof(int));
	while (i < a->size)
	{
		new_stack[i] = a->stack[i];
		i ++;
	}
	new_stack[i] = num;
	a->size ++;
	free(a->stack);
	a->stack = new_stack;
}

void	ft_free_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs && strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}