/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loremipsum <loremipsum@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:02 by hirwatan          #+#    #+#             */
/*   Updated: 2025/01/31 21:24:19 by loremipsum       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int error_check(int argc, char *argv[], t_stack *a, t_stack *b)
// {
// 	int i;

// 	i = 0;
// 	while (argc - 1 > i)
// 	{
// 		if (valid_check(argv[i]))
// 		{
// 			execute_error(a, b);
// 			return (1);
// 		}
// 		i++;
// 	}
// }
// void node_new(t_stack *provisional, int argc, char *argv[])
// {
	
// }

int main(int argc, char *argv[])
{
	t_stack *a;
	t_stack *b;

	a = stack_new();
	b = stack_new();
	// if (error_check(argc, argv, &a, &b))
	// 	return (1);
	stack_allow(a, b, argc, argv);
	return (0);
}
