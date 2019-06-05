/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:54:33 by mrakgope          #+#    #+#             */
/*   Updated: 2019/06/05 12:21:26 by mrakgope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# define BUFF_SIZE 4096

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				ft_memcpy(void *dest, void *src, unsigned int n);
void				ft_memccpy(void *dest, void *src, int c, size_t n);
void				ft_memchr(const void *s, int c, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *ptr, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strncat(char *s, const char *t, int c);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strncmp(const char *s, const char *t, size_t n);
char				*ft_strnstr(char *s1, char *s2, size_t len);
char				*ft_strrchr(char *s, int c);
char				*ft_strstr(char *str, char *str1);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
