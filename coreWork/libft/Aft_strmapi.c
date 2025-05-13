/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aft_strmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:52:54 by selow             #+#    #+#             */
/*   Updated: 2025/05/13 18:50:35 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*new;

	if (s == NULL)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
