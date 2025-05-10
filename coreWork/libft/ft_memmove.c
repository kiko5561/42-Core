/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:27:12 by selow             #+#    #+#             */
/*   Updated: 2025/05/08 20:26:40 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dptr;
	const unsigned char	*sptr;

	dptr = (unsigned char *)dst;
	sptr = (const unsigned char *)src;
	if (sptr < dptr && dptr < sptr + n)
	{
		while (n--)
			dptr[n] = sptr[n];
	}
	else
	{
		while (n--)
			*dptr++ = *sptr++;
	}
	return (dst);
}

/*
SYNOPSIS
       #include <string.h>

       void *memmove(void dest[.n], const void src[.n], size_t n);

DESCRIPTION
       The  memmove() function copies n bytes from memory area src to mem‐
       ory area dest.  The memory areas may overlap: copying  takes  place
       as  though the bytes in src are first copied into a temporary array
       that does not overlap src or dest, and the bytes  are  then  copied
       from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/
