/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:48:21 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/02 11:39:27 by hirwatan         ###   ########.fr       */
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

void				stack_new(t_node *dummy);
int					ft_atoi(const char *nptr);
void				free_list(t_list *dummy);
void				print_list(t_node *dummy);
void				stack_input(t_list *a, int argc, char *argv[]);

void				sa(t_node *a);

#endif