/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:13:09 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/28 15:39:42 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		b;
	unsigned char		*str;
	unsigned int		i;

	i = 0;
	b = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == b)
			return (str + i);
		i++;
	}
	return (0);
}
