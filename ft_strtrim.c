/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:37:05 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/19 12:22:55 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > 0)
		j++;
	return (ft_strsub(s, i, j - i + 1));
}
