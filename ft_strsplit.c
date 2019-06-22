/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:38:34 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/21 23:02:44 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s || !c)
		return (0);
	ptr = ft_memalloc(ft_strlen(s) + 1);
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i + k] && (s[i + k] != c))
				k++;
			ptr[j++] = ft_strsub(s, i, k);
			i = i + k;
		}
	}
	ptr[j] = 0;
	return (ptr);
}
