/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:33:00 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/20 12:33:27 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *ptr, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (ptr);
	while (ptr[j] != '\0')
	{
		while (str[i] != '\0')
		{
			if (ptr[j + i] != str[i])
				break ;
			j++;
		}
		if (ptr[j] != '\0')
			return (str + i);
		i++;
	}
	return (0);
}
