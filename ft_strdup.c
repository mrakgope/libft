/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:06:20 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/08 16:14:48 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int i;
	int lgt;
	char *ptr;

	lgt = 0;
	i = 0;
	while (s1[lgt] != '\0')
		lgt++;
	ptr = (char *)malloc(sizeof(s1) * lgt + 1);
	while (i < lgt)
	{
		ptr[i] = s1[i];
		i++;
	}
	return ((char*)ptr);
}
