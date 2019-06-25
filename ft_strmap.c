/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:29:18 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/25 15:44:21 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen((char *)s);
	if (*s != '\0')
	{
		if (!(ptr = (char *)malloc(j * sizeof(char) + 1)))
			return (0);
		while (s[i] != 0)
		{
			ptr[i] = f(s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}
