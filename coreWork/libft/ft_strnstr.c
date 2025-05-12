/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:51:07 by selow             #+#    #+#             */
/*   Updated: 2025/05/12 14:45:45 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j < len) && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
SYNOPSIS
       #include <string.h>
       (See libbsd(7) for include usage.)

       char *
       strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
       The  strnstr()  function  locates the first occurrence of the null-terminated string little in the string big, where not more than len characters
       are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should
       only be used when portability is not a concern.

RETURN VALUES
       If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first  character  of
       the first occurrence of little is returned.

EXAMPLES
       The following sets the pointer ptr to NULL, because only the first 4 characters of largestring are searched:

             const char *largestring = "Foo Bar Baz";
             const char *smallstring = "Bar";
             char *ptr;

             ptr = strnstr(largestring, smallstring, 4);
*/
