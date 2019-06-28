/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:24:24 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/28 15:30:31 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*ptr;
	unsigned int		i;

	i = 0;
	if (!s || !(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i + start];
		i += 1;
	}
	ptr[i] = '\0';
	return (ptr);
}
