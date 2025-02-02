/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:55:29 by hirwatan          #+#    #+#             */
/*   Updated: 2025/02/02 16:46:10 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_rank(t_list *a)
{
	t_node	*current;//現在
	t_node	*compare;
	int		first_loop;
	int		firtst_conpare;

	if (!a || !a->front)
		return ;
	first_loop = 1;
	current = a->front;
	while (first_loop || current != a->front)
	{
		first_loop = 0;
		current->rank = 1;
		compare = a->front;
		firtst_conpare = 1;
		while (firtst_conpare || compare != a->front)
		{
			if (current->value > compare->value)
				current->rank++;
			compare = compare->next;
			firtst_conpare = 0;
		}
		current = current->next;
		firtst_conpare = 1;
	}
}
// current->value = 5
// 比較：
// 5 vs 5: 同じ (rank = 1)
// 5 vs 2: 2が小さい (rank = 2)
// 5 vs 8: 5が小さい (rank = 2)
// 5 vs 1: 1が小さい (rank = 3)
// 結果：rank = 3

// current->value = 2
// 比較：
// 2 vs 5: 2が小さい (rank = 1)
// 2 vs 2: 同じ (rank = 1)
// 2 vs 8: 2が小さい (rank = 1)
// 2 vs 1: 1が小さい (rank = 2)
// 結果：rank = 2
