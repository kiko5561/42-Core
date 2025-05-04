/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:34:43 by selow             #+#    #+#             */
/*   Updated: 2025/05/02 16:05:23 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft/libft.h"

int	main(int argc, char **argv)
{
	char str1[] = "Hello\nabcd";
	char str2[] = "Hello\n";
	char *substr = ft_substr(str1, 1, 100);
	
	printf("ft_substr: %s\n", substr);
	free(substr);
	
	return (0);
}
