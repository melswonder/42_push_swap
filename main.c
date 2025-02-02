/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:02 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/02 11:27:22 by hirwatan         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	t_list	a;
	a.front =NULL;
	// t_stack *b;
	//a = (t_list *)malloc(sizeof(t_list));
	//stack_new(a);
	// b = stack_new();
	// if (error_check(argc, argv, &a, &b))
	// 	return (1);
	stack_input(&a, argc, argv);
	
	print_list(a->front);
	sa(a->front);
	print_list(a->front);
	printf("こんばんは\n");
	free_list(a);
	return (0);
}
