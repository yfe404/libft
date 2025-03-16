/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:21:25 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/16 12:07:10 by yfeunteu         ###   ########.fr       */
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

char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
	size_t	dlen;

	dlen = ft_strnlen(src, dsize);
	dst = ft_memcpy(dst, src, dlen);
	bzero(dst + dlen, dsize - dlen);
	return (dst);
}
