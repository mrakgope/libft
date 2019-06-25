/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:10:44 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/25 15:23:16 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s, const char *t)
{
	int i;

	i = 0;
	while (s[i] == t[i] && s[i] != '\0' && t[i] != '\0')
		i++;
	return ((unsigned char)s[i] - (unsigned char)t[i]);
}
