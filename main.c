/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:28:21 by jbellucc          #+#    #+#             */
/*   Updated: 2025/05/16 15:56:43 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	static t_stack	a;
	static t_stack	b;
	
	if (ac < 2)
		return 0;
	if (!parse_args(&a, ac, av))
	{
		ft_printf("Error\n");
		free(a.stack);
		free(b.stack);
		return (1);
	}
	int i = 0;
	while (i < a.size)
	{
		ft_printf("%i\n", a.stack[i]);
		i++;
	}
	free(a.stack);
	free(b.stack);
	return 0;
}