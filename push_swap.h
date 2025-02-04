/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:21 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/04 17:35:02 by hirwatan         ###   ########.fr       */
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

typedef struct s_node
{
	int				value;
	int				rank;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

/// @brief
/// @details pointer is first null is not node
typedef struct s_list
{
	t_node			*front;
}					t_list;

void				stack_input(t_list *a, t_list *b, int argc, char *argv[]);
void				push_front(t_list *a, t_node *new_node);
void				push_back(t_list *a, int value);

void				stack_rank(t_list *a);
void				print_list(t_list *dummy);
void				free_list(t_list *dummy);

int					ft_atoi(const char *nptr);
void				sa(t_list *a);
void				ra(t_list *a);
void				rra(t_list *a);

void				pb(t_list *a, t_list *b);

#endif