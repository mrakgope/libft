/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:27:19 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/27 14:29:39 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numbers(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*ptr;
	size_t			len;
	unsigned int	j;

	j = n;
	len = ft_numbers(n);
	if (n < 0)
	{
		j = -n;
		len++;
	}
	if (!(ptr = ft_strnew(len)))
		return (NULL);
	ptr[--len] = j % 10 + '0';
	while (j /= 10)
		ptr[--len] = j % 10 + '0';
	if (n < 0)
		*(ptr + 0) = '-';
	return (ptr);
}
