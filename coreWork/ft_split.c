/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:17:15 by selow             #+#    #+#             */
/*   Updated: 2025/05/16 18:17:15 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static	char	**ft_free_all(char **new)
{
	int	i;

	i = 0;
	while (new[i])
		free(new[i++]);
	free(new);
	return (NULL);
}

static	int	ft_count_words(char *s,char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count += 1;
		while (s[i] == c)
			i++;
		i++;	
	}
	printf("%i\n", count);
	return (count);
}

static	int	ft_count_wordlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}
char	**ft_split(const char *s, char c)
{
	char	**new;
	int	wordcount;
	int	i;
	int 	j;
	int	wordlen;

	i = 0;
	wordcount = ft_count_words((char *)s, c);
	new = malloc(sizeof(char *) * (wordcount + 1));
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break;
		wordlen = ft_count_wordlen((char *)s, c);
		new[i] = malloc(sizeof(char) * (wordlen + 1));
		if (new[i] == NULL)
		{
			ft_free_all(new);
			return (NULL);
		}
		j = 0;
		while (*s != c && *s)
		{
			new[i][j++] = *s++;
		}
		new[i][j] = '\0';
		printf("Word[%i]: %s\n", i, new[i]);
		i++;
	}
	new[i] = NULL;
	return (new);
}

int	main(void)
{
	char	str[100] = "everyone is here now";
	char	**new = ft_split(",,,apple,,,banana,,,", ',');
	int	i = 0;

	while (new[i])
	{
		printf("%s\n", new[i++]);
	}

	return 0;
}
