/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:10:48 by selow             #+#    #+#             */
/*   Updated: 2025/05/19 15:21:27 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dst);
}
/*
SYNOPSIS
       #include <string.h>

       void *memcpy(void dest[restrict .n], const void src[restrict .n],
                    size_t n);

DESCRIPTION
       The memcpy() function copies n bytes from memory area src to memory
       area  dest.   The memory areas must not overlap.  Use memmove(3) if
       the memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/
