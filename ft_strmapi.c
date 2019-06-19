/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:17:51 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/18 11:39:52 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	int				j;

	i = 0;
	j = ft_strlen((char*)s);
	if (*s != '\0' && *f != '\0')
	{
		ptr = (char*) malloc(j * sizeof(ptr));
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		return (ptr);
	}
	return (0);
}

int main()
{
	char *ptr;
	char str[] = "we are one";

	ft_strmapi(ptr, str);
	printf("%s\n", ptr);
	return (0);
}
