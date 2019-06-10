/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:57:33 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/10 12:18:58 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr, const void *str, size_t len)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = (const unsigned char *)ptr;
	s2 = (const unsigned char *)str;
	if (*s1 == *s2 || len == 0)
		return (0);
	while (len--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		while (len)
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
