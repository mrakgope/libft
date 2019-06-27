/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:33:00 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/27 13:40:19 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *ptr, const char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen((char*)str);
	if (len == 0)
		return ((char*)ptr);
	while (ptr[i] != '\0')
	{
		j = 0;
		while (ptr[i + j] == str[j])
		{
			if (j == len - 1)
				return ((char*)ptr + i);
			j++;
		}
		i++;
	}
	return (0);
}
