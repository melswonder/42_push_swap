/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loremipsum <loremipsum@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:21 by hirwatan          #+#    #+#             */
/*   Updated: 2025/01/31 20:04:08 by loremipsum       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// typedef struct s_node
// {
// 	int				value;
// 	struct s_node	*next;
// } t_node;

typedef struct s_stack
{
	int			value;
	int			number;
	struct s_stack* prev;
  	struct s_stack* next;
} t_stack;

t_stack *stack_new();
int	ft_atoi(const char *nptr);
void stack_allow(t_stack *a, t_stack *b, int argc, char *argv[]);

#endif