/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:42:40 by selow             #+#    #+#             */
/*   Updated: 2025/04/19 22:09:26 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	byte;

	byte = (unsigned char)c;
	p = (unsigned char *)s;
	while (n > 0)
	{
		*p++ = byte;
		n--;
	}
	return (s);
}

/*
SYNOPSIS
       #include <string.h>

       void *memset(void s[.n], int c, size_t n);

DESCRIPTION
       The  memset()  function  fills the first n bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.*/
