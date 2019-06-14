/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:52:08 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 12:42:29 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *ptr, int c)
{
	while (*ptr != (char)c && *ptr != '\0')
		ptr++;
	if (*ptr == ((char)c))
		return ((char *)(ptr + i));
	return (NULL);
}
