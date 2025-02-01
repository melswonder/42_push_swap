/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:21 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/01 20:03:47 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// typedef struct s_node
// {
// 	int				value;
// 	struct s_node	*next;
// } t_node;

typedef struct s_stack
{
	int				value;
	int				rank;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

typedef struct s_front
{
	t_stack			*front;
}					t_front;

void				stack_new(t_front *dummy);
int					ft_atoi(const char *nptr);
void				free_list(t_front *dummy);
void				print_list(t_stack *dummy);
void				stack_allow(t_front *a, int argc, char *argv[]);

void				sa(t_stack *a);

#endif