/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:24:21 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 13:01:23 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ptr, int c)
{
	size_t i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	if (c == 0)
		return ((char *)ptr + i);
	while (i > 0)
	{
		i--;
		if (ptr[i] == ((char)ptr))
			return ((char *)ptr + i);
	}
	return (0);
}
