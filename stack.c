/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loremipsum <loremipsum@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:01:05 by loremipsum        #+#    #+#             */
/*   Updated: 2025/01/31 21:27:15 by loremipsum       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void insert_back_a(t_stack *dummy, int value, int number)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = value;
    new_node->number = number;

    new_node->prev = dummy->prev;
    new_node->next = dummy;
    dummy->prev->next = new_node;
    dummy->prev = new_node;
}
void insert_back_b(t_stack *dummy, int number)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = 0;
    new_node->number = number;

    new_node->prev = dummy->prev;
    new_node->next = dummy;
    dummy->prev->next = new_node;
    dummy->prev = new_node;
}

void print_list(t_stack *dummy)
{
    t_stack *current = dummy->next;
    printf("リストの内容\n");
    while (current != dummy)
    {
        printf("[%d]=%d\n", current->number, current->value);
        current = current->next;
    }
    printf("\n");
}

void free_list(t_stack *dummy)
{
    t_stack *current = dummy->next;
    while (current != dummy)
    {
        t_stack *temp = current;
        current = current->next;
        free(temp);
    }
    free(dummy);
}

void stack_allow(t_stack *a, t_stack *b, int argc, char *argv[])
{
    int i;
    int value;

    value = 0;
    i = 1;
    while (i < argc)
    {
        value = ft_atoi(argv[i]);
        insert_back_a(a, value, i);
        insert_back_b(a,i);
        i++;
    }
    print_list(a);
    printf("こんばんは\n");
    print_list(b);
    free_list(a);
    free_list(b);
}
