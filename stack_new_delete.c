/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:41:35 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/02 11:22:26 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		dstack_new(t_node *node)
{
	node = (t_stack *)malloc(sizeof(t_stack));
	
	front->value = 0;
	front->rank = 0;
	front->next = front;
	front->prev = front;
}
