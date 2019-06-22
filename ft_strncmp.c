/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:39:22 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/20 12:24:26 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s, const char *t, size_t n)
{
	while ((*s != '\0' || *t != '\0') && n--)
	{
		if (*s != *t)
			return ((unsigned char)*s - (unsigned char)*t);
		s++;
		t++;
	}
	return (0);
}
