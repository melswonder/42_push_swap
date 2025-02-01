/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:41:35 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/01 15:40:36 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_new()
{
	t_stack *dummy;

	dummy = malloc(sizeof(t_stack));
	dummy->value = 0;
	dummy->number = 0;
	dummy->prev = NULL;
	dummy->next = NULL;
	return (dummy);
}
