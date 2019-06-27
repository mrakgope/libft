/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:37:05 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/27 14:17:32 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(char const *s)
{
	int len;

	len = ft_strlen((char*)s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	return (len);
}

static int		ft_first(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		len;
	char	*trim;

	if (!s)
		return (NULL);
	i = ft_first(s);
	k = 0;
	len = ft_length(s) - i + 1;
	if (0 > len)
		len = 0;
	trim = ft_strnew(len);
	if (!trim)
		return (NULL);
	while (k < len)
	{
		trim[k] = s[i];
		k++;
		i++;
	}
	trim[k] = '\0';
	return (trim);
}
