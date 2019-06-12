/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:41:03 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/12 16:45:29 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	i = 0;
	j = 0;
	c = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < len)
	{
		dst[i + j] = src[i];
		j++;
	}
	dst[i + j] = '\0';
	while (src[c] != '\0')
		c++;
	return (c + len);
}
