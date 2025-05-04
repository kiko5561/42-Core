/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:27:12 by selow             #+#    #+#             */
/*   Updated: 2025/05/04 13:40:37 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dptr;
	const char 	*sptr;

	if (src == dst)
		return (dst);
	
	dptr = (char *)dst;
	sptr = (char *)src;

/*
	Check if copying forward would cause data corruption due to overlap
	We need to copy backwards if:
		- the source starts before the destination AND
		- the source is interlapping with the destination 
		-> the pointer of the last element of the source
		is bigger than the first pointer of the destination pointer
*/
	if (sptr < dptr && sptr + slen > dptr)
	{
		while (len--)
		*dptr++ = *((sptr--) + slen);
	}
	else
	{
		while (sptr !+ '\0')
			*dptr++ = *sptr++;
	}
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
