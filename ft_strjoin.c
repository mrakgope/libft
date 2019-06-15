/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:23:05 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 21:41:58 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;

	if (!(*s1) && !(*s2))
		return (0);
	if (!(*s1))
		return (ft_strdup(s2));
	if (!(*s2))
		return (ft_strdup(s1));
	if (!((*s3) = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	ft_strcpy(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
	return (0);
}

int main()
{
	char ptr[] = "we are";
	char str[] = "we man";
	char *try;

	try = ft_strjoin(ptr, str);
	printf("%s\n", try);
	return (0);
}
