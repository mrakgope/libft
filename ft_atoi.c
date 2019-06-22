/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:39:52 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/20 13:21:37 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	int					syn;
	unsigned int		rslt;

	i = 0;
	syn = 1;
	rslt = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (*str == '-')
		syn = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - '0';
		i++;
	}
	return (syn * rslt);
}
