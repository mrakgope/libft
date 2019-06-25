/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:43:42 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/25 15:49:26 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	
	if (!(ptr = (char*)malloc(size + 1)))
		return (0);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
