/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:38:34 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/19 12:52:30 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(100 * 1000);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s[i] == 0;
			i++;
		}
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
