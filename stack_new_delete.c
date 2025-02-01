/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:41:35 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/01 20:03:20 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_new(t_front *dummy)
{
	dummy->front = (t_stack *)malloc(sizeof(t_stack));
	dummy->front->value = 0;
	dummy->front->rank = 0;
	dummy->front->next = NULL;
	dummy->front->prev = NULL;
}
