/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:38:34 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/27 14:22:29 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int		i;
	int		timer;

	i = 0;
	timer = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			timer++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (timer);
}

static int	wordlen(const char *str, char c)
{
	int		i;
	int		timer2;

	i = 0;
	timer2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		timer2++;
		i++;
	}
	return (timer2);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		i2;
	int		i3;

	if (!s || !(str = (char**)malloc(sizeof(*str) *
					(word_count(s, c) + 1))))
		return (0);
	i = -1;
	i2 = 0;
	while (++i < word_count(s, c))
	{
		i3 = 0;
		if (!(str[i] = ft_strnew(wordlen(&s[i2], c) + 1)))
			str[i] = NULL;
		while (s[i2] == c)
			i2++;
		while (s[i2] != c && s[i2])
			str[i][i3++] = s[i2++];
		str[i][i3] = '\0';
	}
	str[i] = 0;
	return (str);
}
