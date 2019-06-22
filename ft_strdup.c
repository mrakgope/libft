/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:06:20 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/22 03:19:51 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char		*ptr;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	ptr = (char*)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
