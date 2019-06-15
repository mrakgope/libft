/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:43:42 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 21:56:12 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

int	main()
{
	char ptr[] = "hello";
	char *str;

	str = ft_strnew(ft_strlen(ptr));
	printf("%s\n", str);
	return (0);
}
