/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:51:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/01 16:19:31 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a) //いっこしたと入れ替える
{
	int swap;

	swap = a->value;
	a->value = a->next->value;
	a->next->value = swap;
	
	swap = a->number;
	a->number = a->next->number;
	a->next->number = swap;
	
	
	write(1,"sa\n",3);
}

void	sb(t_stack *b)
{
	write(1,"sb\n",3);
}

void	ss(t_stack *a,t_stack *b)
{
	write(1,"ss\n",3);
}

void	pa(t_stack *a,t_stack *b)
{
	write(1,"pa\n",3);
}

void	pb(t_stack *a,t_stack *b)
{
	write(1,"pb\n",3);
}

void	ra(t_stack *a,t_stack *b)
{
	write(1,"ra\n",3);
}

void	rb(t_stack *a,t_stack *b)
{
	write(1,"rb\n",3);
}

void	rr(t_stack *a,t_stack *b)
{
	write(1,"rr\n",3);
}

void	rra(t_stack *a,t_stack *b)
{
	write(1,"rra\n",4);
}

void	rrb(t_stack *a,t_stack *b)
{
	write(1,"rrb\n",4);
}

void	rrr(t_stack *a,t_stack *b)
{
	write(1,"rrr\n",4);
}
