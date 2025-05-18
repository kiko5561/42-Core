/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:40:18 by selow             #+#    #+#             */
/*   Updated: 2025/05/18 01:24:11 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H 
#define LIBFT_H

#include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isdigit(int  c);
char    *ft_strdup(const char   *s);
size_t  ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dsize);
char    *ft_substr(const char* src, int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
void    *ft_memmove(void *dst, const void *src, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
int	ft_isalpha(char c);
int	ft_isalnum(char c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
int	ft_isascii(int c);
char    **ft_split(const char *s, char c);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
int     ft_isprint(int c);


#endif
