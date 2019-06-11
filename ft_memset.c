/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:28:37 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/10 14:06:25 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char *str;
	int i;

	str = (unsigned char *)ptr;
	while (*str != '\0' && len --)
	{
		(char *)str[i] = c;
		i++;
	}
}

int main()
{
	char str[] = "we are one";

	ft_memset(str);
	put(str);
	return (0);
}
