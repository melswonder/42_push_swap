/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:02 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/06 20:27:33 by hirwatan         ###   ########.fr       */
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
	t_list	b;

	a.front = NULL;
	b.front = NULL;
	// if (error_check(argc, argv, &a, &b))
	// 	return (1);
	// stack_input(&a, &b, argc, argv); //値を入れ終わり　ランク付け終わり
	stack_input(&a, &b, argc, argv); //値を入れ終わり　ランク付け終わり correct
	// push_swap(&a,&b);
	print_list(&a);
	pb(&a, &b);
	print_list(&a);
	print_list(&b);
	pa(&a, &b);
	print_list(&a);
	// print_list(&a);
	// print_list(&b);
	// rra(&a);
	// print_list(&a);
	free_list(&a);
	free_list(&b);
	return (0);
}
