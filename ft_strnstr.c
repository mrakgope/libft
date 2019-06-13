/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:09:20 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/13 10:54:21 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ptr, const char *str, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return ((char *)ptr);
	while (i < len && ptr[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if ((i + j) >= len || ptr[i + j] != str[j])
				break ;
			j++;
		}
		if (str[j] == '\0')
			return ((char *)(ptr + i));
		i++;
	}
	return (0);
}
