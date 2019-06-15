/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:39:52 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 14:38:37 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				syn;
	unsigned int	rslt;

	i = 0;
	syn = 1;
	rslt = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == '\f')
		str++;
	if (str[i] == '-')
	{
		syn = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - '0';
		i++;
	}
	return (syn * rslt);
}
