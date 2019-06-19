/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:29:18 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/18 11:15:56 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int			i;
	int			j;

	i = 0;
	j = ft_strlen((char *)s);
	if (*s != '\0' && *f != '\0')
	{
		ptr = (char *) malloc(j * sizeof(f));
		while (s[i] != 0)
		{
			ptr[i] = f(s[i]);
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

	ft_strmap(ptr, str);
	printf("%s\n", ptr);
	return (0);
}
