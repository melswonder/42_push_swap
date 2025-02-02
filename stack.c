/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:01:05 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/02 11:57:43 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_front(t_list *a, t_node *new_node) //値を入れる時これだと逆順になってしまう　そのためpaの時に使われる
{
	new_node->next = a->front;
	new_node->prev = a->front->prev;
	a->front->prev = new_node;
	a->front->prev->next = new_node;
	a->front = new_node; //先頭を付け替え
}

void	push_back(t_list *a, int value) //コマンドライン引数を入れる
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->prev = a->front->prev;
	new_node->next = a->front;
	a->front->prev->next = new_node;
	a->front->prev = new_node;
}

void	stack_input(t_list *a, int argc, char *argv[])
{
	int	i;
	int	value;

	value = 0;
	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		push_back(a, value);
		i++;
	}
}

// void	print_list(t_stack *dummy)
// {
// 	t_stack	*current;

// 	current = dummy->next;
// 	printf("リストの内容\n");
// 	while (current != dummy)
// 	{
// 		printf("%d\n", current->value);
// 		current = current->next;
// 	}
// 	printf("\n");
// }

// void	free_list(t_front *dummy)
// {
// 	t_stack	*current;
// 	t_stack	*temp;

// 	current = dummy->front->next;
// 	while (current != dummy->front)
// 	{
// 		temp = current;
// 		current = current->next;
// 		free(temp);
// 	}
// 	free(dummy->front);
// 	free(dummy);
// }

