/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:51:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/04 19:39:22 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop
void	push
void	rotat


void	sa(t_list *a) //いっこしたと入れ替える
{
	int swap;

	swap = a->front->value;
	a->front->value = a->front->next->value;
	a->front->next->value = swap;
	swap = a->front->rank;
	a->front->rank = a->front->next->rank;
	a->front->next->rank = swap;
	write(1, "sa\n", 3);
}

// void	sb(t_list *b)
// {
// 	int swap;

// 	swap = b->front->value;
// 	b->front->value = b->front->next->value;
// 	b->front->next->value = swap;
// 	swap = b->front->rank;
// 	b->front->rank = b->front->next->rank;
// 	b->front->next->rank = swap;
// 	write(1,"sb\n",3);
// }


//pop push delete のコマンドを作る。
void	ss(t_list *a,t_list *b)
{
	int swap;

	swap = a->front->value;
	a->front->value = a->front->next->value;
	a->front->next->value = swap;
	swap = a->front->rank;
	a->front->rank = a->front->next->rank;
	a->front->next->rank = swap;

	swap = b->front->value;
	b->front->value = b->front->next->value;
	b->front->next->value = swap;
	swap = b->front->rank;
	b->front->rank = b->front->next->rank;
	b->front->next->rank = swap;
	write(1,"ss\n",3);
}

// void	pa(t_list *a, t_list *b)
// {
// 	write(1, "pa\n", 3);
// }

// void	pb(t_list *a, t_list *b)
// {
// 	// t_node	*new_node;

// 	// new_node = (t_node *)malloc(sizeof(t_node));
// 	// new_node->prev = b->front->prev;
// 	// new_node->next = b->front->next;
// 	b->front->prev = a->front->next;
// 	b->front->prev = new_node;

// 	a->front->prev = a->front->next;
// 	a->front->next = a->front->prev;
// 	new_node->value = a->front->value;
// 	new_node->rank = a->front->rank;
// 	a->front->next = a->front->prev;
// 	a->front->prev = a->front->next;
// 	write(1, "pb\n", 3);
// }

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
