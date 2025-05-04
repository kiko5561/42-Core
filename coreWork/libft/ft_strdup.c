/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 02:33:54 by selow             #+#    #+#             */
/*   Updated: 2025/04/19 03:01:51 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}


/*
DESCRIPTION
       The  strdup()  function  returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with mal‐
       loc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is longer than n, only n bytes are  copied,  and  a  terminating  null  byte
       ('\0') is added.

       strdupa() and strndupa() are similar, but use alloca(3) to allocate the buffer.

RETURN VALUE
       On  success,  the strdup() function returns a pointer to the duplicated string.  It returns NULL if insufficient memory was available, with errno
       set to indicate the error.

ERRORS
       ENOMEM Insufficient memory available to allocate duplicate string.
*/
