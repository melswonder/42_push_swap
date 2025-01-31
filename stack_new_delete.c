/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loremipsum <loremipsum@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:41:35 by loremipsum        #+#    #+#             */
/*   Updated: 2025/01/31 21:22:48 by loremipsum       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_new()
{
	t_stack *dummy;

	dummy = malloc(sizeof(t_stack));
	dummy->value = 0;
	dummy->number = 0;
	dummy->prev = dummy;
	dummy->next = dummy;
	return (dummy);
}
