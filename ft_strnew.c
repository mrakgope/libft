/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:43:42 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/20 15:00:53 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char*)malloc(size);
	if (*ptr == '\0')
		return (0);
	ft_memset(ptr, (int)'\0', size + 1);
	return (ptr);
	return (0);
}
