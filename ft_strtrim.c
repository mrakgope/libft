/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:37:05 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/21 23:00:51 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (0);
	ptr = ft_strdup(s);
	i = ft_strlen(ptr) - 1;
	while (*ptr == ' ' || *ptr == '\n' || *ptr == '\t')
		ptr++;
	while (ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t')
		i--;
	ptr[++i] = '\0';
	return (ptr);
}
