/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:39:52 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/27 14:41:22 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		rslt;
	int		syn;
	size_t	i;

	rslt = 0;
	syn = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		syn = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		rslt = rslt * 10 + *str++ - '0';
		i++;
	}
	if (i > 10 && syn < 0)
		return (0);
	if (i > 10 && syn > 0)
		return (-1);
	return (rslt * syn);
}
