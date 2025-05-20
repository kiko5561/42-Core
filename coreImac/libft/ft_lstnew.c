/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aft_lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:28:35 by selow             #+#    #+#             */
/*   Updated: 2025/05/20 12:16:04 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

/*
DESCRIPTION
    Allocate (with malloc(3)) and return the new element. The member variable 'content' is initialized with the value of the 'content' parameter. The 'next' variable is initialized to NULL.

typedef struct s_list {
	void	*content;
	t_list *next;
}	t_list;

t_list	*node = malloc(sizeof(t_list));
*/
