/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:28:21 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/23 16:05:47 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	static t_stack	a;
	static t_stack	b;

	if (ac < 2)
		return (0);
	if (!parse_args(&a, ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		free(a.stack);
		free(b.stack);
		return (1);
	}
	b.stack = ft_calloc(a.size, sizeof(int));
	if (!check_sort(&a))
		sort(&a, &b);
	free(a.stack);
	free(b.stack);
	return (0);
}
