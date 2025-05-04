/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:42:07 by selow             #+#    #+#             */
/*   Updated: 2025/05/02 04:52:20 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	slen;

	if (src == NULL)
		return (0);
	slen = ft_strlen(src);
	if (dsize == 0)
		return (slen);
	while (*src != '\0' && dsize - 1 > 0)
	{
		*dst++ = *src++;
		dsize--;
	}
	*dst = '\0';
	return (slen);
}
/*
       The strlcpy() and strlcat() functions return the total length  of  the  string  they  tried  to  create.   For
       strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of
       src.  While this may seem somewhat confusing, it was done to make truncation detection simple.

       Note,  however, that if strlcat() traverses size characters without finding a NUL, the length of the string is
       considered to be size and the destination string will not be NUL-terminated (since there was no space for  the
       NUL).   This  keeps strlcat() from running off the end of a string.  In practice this should not happen (as it
       means that either size is incorrect or that dst is not a proper “C” string).  The check exists to prevent  po‐
       tential security problems in incorrect code.
*/	
