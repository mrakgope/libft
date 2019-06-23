/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:57:33 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/23 12:53:47 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr, const void *str, size_t len)
{
	const unsigned char		*s1;
	const unsigned char		*s2;
	int						i;

	if (ptr == str || len == 0)
		return (0);
	i = 0;
	s1 = (const unsigned char *)ptr;
	s2 = (const unsigned char *)str;
	while (len--)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
