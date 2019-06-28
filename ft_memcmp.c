/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:57:33 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/28 16:04:20 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*ptr;
	const unsigned char		*str;
	size_t					i;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	ptr = (const unsigned char *)s1;
	str = (const unsigned char *)s2;
	while (n--)
	{
		if (ptr[i] != str[i])
			return (ptr[i] - str[i]);
		i++;
	}
	return (0);
}
