/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:25:59 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/26 19:32:26 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s && s[len] && (len < n))
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dlen;

	if (size > 0)
	{
		dlen = ft_strnlen(src, size - 1);
		dst = ft_memcpy(dst, src, dlen);
		dst[dlen] = '\0';
	}
	return (ft_strlen(src));
}
