/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:05:21 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/25 19:05:23 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size);

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(t_list *));
	if (!link)
		return (NULL);
	if (!content)
	{
		link->content_size = 0;
		link->content = NULL;
		link->next = NULL;
	}
	else
	{
		link->content_size = content_size;
		link->content = malloc(content_size);
		if (!link->content)
		{
			free (link);
			return (NULL);
		}
		link->content = ft_memcpy(link->content, content, content_size);
		link->next = NULL;
	}
	return (link);
}
