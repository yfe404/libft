/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:03:54 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/20 14:04:54 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t	*ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *ptr, size_t size);

static char	*ft_strnew(size_t size)
{
	char	*ptr;	

	ptr = (char *)malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = ft_strnew(s1_len + s2_len + 1);
	if (!(joined && s1 && s2))
	{
		free(joined);
		return (NULL);
	}
	ft_strlcpy(joined, s1, s1_len + s2_len + 1);
	ft_strlcat(joined, s2, s1_len + s2_len + 1);
	return (joined);
}
