/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:11:43 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/15 01:20:48 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	if (*s1 && *s2 && n)
	{
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
			n--:
		}
		return (1);
	}
	return (0);
}
