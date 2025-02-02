/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:02 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/02 17:08:34 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void push_swap(t_list *a,t_list *b)
// {
// 	Coordinate_Compression(&a,&b);
	
// }

int	main(int argc, char *argv[])
{
	t_list	a;
	// t_list	b;
	a.front =NULL;
	// if (error_check(argc, argv, &a, &b))
	// 	return (1);
	stack_input(&a, argc, argv); //値を入れ終わり　ランク付け終わり
	// push_swap(&a,&b);
	print_list(&a);
	ra(&a);
	print_list(&a);
	free_list(&a);
	return (0);
}
