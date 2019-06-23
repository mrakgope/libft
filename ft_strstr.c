/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:33:00 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/23 14:25:06 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *ptr, char *str)
{
	int i;
	int j;

	if (str[0] == '\0')
		return (ptr);
	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (ptr[i + j] != str[j])
				break ;
			j++;
		}
		if (str[j] != '\0')
			return (ptr + i);
		i++;
	}
	return (0);
}
