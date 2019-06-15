/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:15:05 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 23:26:05 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_strclr(char *s)
{
	int i;

	 while (*s != '\0')
		*s = '\0';
}

int main()
{
	char ptr[5] = "Hello";
	char *str;

	str = ft_strclr((void *)ptr);
	printf("%s\n", str);
	return (0);
}
