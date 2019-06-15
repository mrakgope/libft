/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:58:49 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 22:14:58 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = malloc(size);
	if (*ptr == '\0')
		return (0);
	ft_memset(ptr, 0, size);
	return (ptr);
}

int main()
{
	char str[] = "we are one";
	char *ptr;

	ptr = ft_memalloc(ft_strlen(str));
	printf("%s\n", ptr);
	return (0);
}
