/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:28:37 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/13 12:30:02 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)ptr;
	while (str[i] != '\0' && len--)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}
