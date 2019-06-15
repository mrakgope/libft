/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:18:28 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 23:00:16 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_memdel(void **ap)
{
	free( *ap);
	ap = 0;
}

int	main()
{
	char ptr[5] = "Hello";
	char *str;

	str = ft_memdel((char **)ptr);
	printf("%s\n", str);
	return (0);
}
