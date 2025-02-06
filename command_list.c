/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:51:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/06 20:48:39 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// @brief stack a node pop the param
/// @param t_list
/// @return pop the t_list front t_node
t_node	*pop_front(t_list *list)
{
	t_node	*stack;

	stack = (t_node *)malloc(sizeof(t_node));
	stack->next = NULL;
	stack->prev = NULL;
	stack->value = list->front->value;
	stack->rank = list->front->rank;
	return (stack);
}

void	remove_front_node(t_list *list) // list null dousuru?
{
	t_node *free_node;

	if (!list->front)
		return ;
	free_node = list->front;
	if (free_node->next == free_node)
	{
		free(free_node);
		list->front = NULL;
		return ;
	}
	list->front->next->prev = list->front->prev;
	list->front->prev->next = list->front->next;
	list->front = list->front->next;
	free(free_node);
}

void	add_node_end(t_list *list, t_node *add)
{
	add->next = list->front;
	add->prev = list->front->prev;
	list->front->prev->next = add;
	list->front->prev = add;
}

// bukkoware
void	add_node_front(t_list *list, t_node *add)
{
	if (!list->front)
	{
		add->next = add;
		add->prev = add;
		list->front = add;
		return ;
	}
	list->front->prev->next = add;
	add->next = list->front;
	add->prev = list->front->prev;
	list->front = add;
}

void	list_swap(t_list *list)
{
	int	swap;

	swap = list->front->value;
	list->front->value = list->front->next->value;
	list->front->next->value = swap;
	swap = list->front->rank;
	list->front->rank = list->front->next->rank;
	list->front->next->rank = swap;
}

void	sa(t_list *a) // いっこしたと入れ替える
{
	list_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	list_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	list_swap(a);
	list_swap(b);
	write(1, "ss\n", 3);
}

void	pa(t_list *a, t_list *b)
{
	t_node	*pop_node;

	if (!b->front)
	{
		printf("Error bのスタックがからの状態でpaしようとしています\n");
		exit(0);
	}
	pop_node = pop_front(b);
	remove_front_node(b);
	add_node_front(a, pop_node);
	write(1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	t_node	*pop_node;

	if (!a->front)
	{
		printf("Error aのスタックがからの状態でpbしようとしています\n");
		exit(0); // exit
	}
	pop_node = pop_front(a);
	remove_front_node(a);
	add_node_front(b, pop_node);
	write(1, "pb\n", 3);
}

void	ra(t_list *a)
{
	a->front = a->front->next;
	write(1, "ra\n", 3);
}

// void	rb(t_list *b)
// {
// 	b->front = b->front->next;
// 	write(1,"rb\n",3);
// }

// void	rr(t_list *a, t_list *b)
// {
// 	a->front = a->front->next;
// 	b->front = b->front->next;
// 	write(1,"rr\n",3);
// }

void	rra(t_list *a)
{
	a->front = a->front->prev;
	write(1, "rra\n", 4);
}

// void	rrb(t_list *b)
// {
// 	b->front = b->front->prev;
// 	write(1,"rrb\n",4);
// }

// void	rrr(t_list *a,t_list *b)
// {
// 	a->front = a->front->prev;
// 	b->front = b->front->prev;
// 	write(1,"rrr\n",4);
// }
