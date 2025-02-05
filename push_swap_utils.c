/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:34:22 by loremipsum        #+#    #+#             */
/*   Updated: 2025/02/01 15:41:14 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	over_flow(int m_flag, long l, char next)
{
	if (m_flag == 1)
		if (LONG_MAX / 10 < l || (LONG_MAX / 10 == l && LONG_MAX % 10 <= next
				- '0'))
			return (1);
	if (m_flag == -1)
		if (LONG_MIN / -10 < l || (LONG_MIN / -10 == l && LONG_MIN % -10 *
				-1 <= next - '0'))
			return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		m_flag;
	long	ret;

	m_flag = 1;
	ret = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			m_flag = -1;
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
		{
			if (over_flow(m_flag, ret, *nptr) == 1)
				return ((int)LONG_MAX);
			if (over_flow(m_flag, ret, *nptr) == -1)
				ret = ret * 10 + (long)(*nptr - '0');
			ret = ret * 10 + (long)(*nptr - '0');
			nptr++;
		}
		else
			break ;
	}
	return (ret * m_flag);
}
