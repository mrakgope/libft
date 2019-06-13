/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:13:09 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/13 12:37:56 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	b;
	unsigned char	*str;
	size_t			i;

	i = 0;
	b = (unsigned char)c;
	str = (unsigned char *)ptr;
	while (i < len)
	{
		if (str[i] == (char)b)
			return (str + i);
		i++;
	}
	return (0);
}