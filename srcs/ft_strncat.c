/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:56:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/18 16:56:24 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);

static size_t	ft_strnlen(const char	*s, size_t n)
{
	size_t	len;

	len = 0;
	while (s && s[len] && (len < n))
		len++;
	return (len);
}

char	*ft_strncat(char *dst, const char *src, size_t ssize)
{
	size_t	dlen;
	size_t	slen;

	slen = ft_strnlen(src, ssize);
	dlen = ft_strlen(dst);
	ft_memcpy(dst + ft_strlen(dst), src, slen);
	dst[dlen + slen] = '\0';
	return (dst);
}
