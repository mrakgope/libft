/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:27:19 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/21 13:41:44 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * 2)))
		return (0);
	if (n == -2147483648)
		ft_strcpy(ptr, "-2147483648");
	else if (n < 0)
	{
		ptr[0] = '-';
		ptr[1] = '\0';
		ft_strjoin(ptr, ft_itoa(-n));
	}
	else if (n > 0)
		ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		ptr[0] = n + '0';
		ptr[1] = '\0';
	}
	return (ptr);
}
