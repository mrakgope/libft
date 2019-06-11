/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:28:37 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/11 11:52:35 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)ptr;
	while (str[i] != '\0' && len--)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
