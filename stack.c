/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:01:05 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/02 16:53:16 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_front(t_list *a, t_node *new_node)//値を入れる時これだと逆順になってしまう　そのためpaの時に使われる
{
	new_node->next = a->front;
	new_node->prev = a->front->prev;
	a->front->prev = new_node;
	a->front->prev->next = new_node;
	a->front = new_node; //先頭を付け替え
}

void	push_back(t_list *a, int value) //コマンドライン引数を入れる
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (a->front == NULL)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		a->front = new_node;
	}
	new_node->prev = a->front->prev;
	new_node->next = a->front;
	a->front->prev->next = new_node;
	a->front->prev = new_node;
	new_node->value = value;
	new_node->rank = 0;
}

void	print_list(t_list *stack)
{
	t_node	*cur;

	cur = stack->front;
	printf("front");
	while (1)
	{
		printf(" ->rank%d[%d]",cur->rank, cur->value);
		cur = cur->next;
		if (cur == stack->front)
			break ;
	}
	printf("\n");
}

void	free_list(t_list *stack)
{
	t_node *cur;
	t_node *next;
	cur = stack->front;
	while (cur!=NULL)
	{
		next = cur->next;
		printf("free\n");
		free(cur);
		cur = next;
		if(cur==stack->front)
			break;
	}
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
	stack_rank(a);
}