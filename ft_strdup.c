/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:06:20 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/12 15:34:58 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*ptr;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	ptr = (char *)malloc(sizeof(ptr) * (len + 1));
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	return ((char*)ptr);
}
