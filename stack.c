/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:01:05 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/01 19:54:34 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_back_a(t_stack *dummy, int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	new_node->value = value;
	new_node->prev = dummy->prev;
	new_node->next = dummy;
	dummy->prev->next = new_node;
	dummy->prev = new_node;
}

void	print_list(t_stack *dummy)
{
	t_stack	*current;

	current = dummy->next;
	printf("リストの内容\n");
	while (current != dummy)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	printf("\n");
}

void	free_list(t_front *dummy)
{
	t_stack	*current;
	t_stack	*temp;

	current = dummy->front->next;
	while (current != dummy->front)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(dummy->front);
	free(dummy);
}

void	stack_allow(t_front *a, int argc, char *argv[])
{
	int	i;
	int	value;

	value = 0;
	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		insert_back_a(a->front, value);
		i++;
	}
}
