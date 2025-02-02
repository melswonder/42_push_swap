/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:51:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/02 17:10:29 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a) //いっこしたと入れ替える
{
	int swap;
	
	swap = a->front->value;
	a->front->value = a->front->next->value;
	a->front->next->value = swap;
	swap = a->front->rank;
	a->front->rank = a->front->next->rank;
	a->front->next->rank = swap;
	write(1,"sa\n",3);
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

// void	ss(t_list *a,t_list *b)
// {
// 	int swap;

// 	swap = a->front->value;
// 	a->front->value = a->front->next->value;
// 	a->front->next->value = swap;
// 	swap = a->front->rank;
// 	a->front->rank = a->front->next->rank;
// 	a->front->next->rank = swap;

// 	swap = b->front->value;
// 	b->front->value = b->front->next->value;
// 	b->front->next->value = swap;
// 	swap = b->front->rank;
// 	b->front->rank = b->front->next->rank;
// 	b->front->next->rank = swap;
// 	write(1,"ss\n",3);
// }

// void	pa(t_list *a,t_list *b)
// {
	
// 	write(1,"pa\n",3);
// }

// void	pb(t_stack *a,t_stack *b)
// {
// 	write(1,"pb\n",3);
// }

void	ra(t_list *a)
{
	int swap;
	swap = a->front->value;
	a->front->value = a->front->prev->value;
	a->front->prev->value = swap;
	swap = a->front->rank;
	a->front->rank = a->front->prev->rank;
	a->front->prev->rank = swap;
	write(1,"ra\n",3);
}

// void	rb(t_list *b)
// {
// 	int swap;
// 	swap = b->front->value;
// 	b->front->value = b->front->prev->value;
// 	b->front->prev->value = swap;
// 	swap = b->front->rank;
// 	b->front->rank = b->front->prev->rank;
// 	b->front->prev->rank = swap;
// 	write(1,"rb\n",3);
// }

// void	rr(t_list *a, t_list *b)
// {
// 	int swap;
// 	swap = a->front->value;
// 	a->front->value = a->front->prev->value;
// 	a->front->prev->value = swap;
// 	swap = a->front->rank;
// 	a->front->rank = a->front->prev->rank;
// 	a->front->prev->rank = swap;

// 	swap = b->front->value;
// 	b->front->value = b->front->prev->value;
// 	b->front->prev->value = swap;
// 	swap = b->front->rank;
// 	b->front->rank = b->front->prev->rank;
// 	b->front->prev->rank = swap;
// 	write(1,"rr\n",3);
// }

// void	rra(t_stack *a,t_stack *b)
// {
// 	write(1,"rra\n",4);
// }

// void	rrb(t_stack *a,t_stack *b)
// {
// 	write(1,"rrb\n",4);
// }

// void	rrr(t_stack *a,t_stack *b)
// {
// 	write(1,"rrr\n",4);
// }
