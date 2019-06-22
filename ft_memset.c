/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:28:37 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/21 15:24:32 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	if (len == 0)
		return (ptr);
	while (len--)
	{
		*str = (unsigned char)c;
		if (len)
			str++;
	}
	return (ptr);
}
