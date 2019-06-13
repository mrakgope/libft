/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:06:20 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/13 12:41:11 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*ptr;

	ptr = 0;
	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	ptr = (char *)malloc(sizeof(str) * (len + 1));
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return ((char*)ptr);
}
