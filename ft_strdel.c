/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:06:00 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/14 23:14:08 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_strdel(char **as)
{
	if (**as != '\0')
	{
		free(*as);
		as = 0;
	}
}

int	main()
{
	char str[5] = "Hello";

	ft_strdel(*str);
	printf("%s", str);
	return (0);
}
