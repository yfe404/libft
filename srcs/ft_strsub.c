/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:14:57 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 20:47:21 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dst, const char *src, size_t dsize);

static size_t	ft_strnlen(const char	*s, size_t n)
{
	size_t	len;

	len = 0;
	while (s && s[len] && (len < n))
		len++;
	return (len);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		s_len;

	s_len = ft_strnlen(s, len);
	if (start > ft_strlen(s))
		return (NULL);
	substr = ft_strnew(len + 1);
	if (!(substr && s))
		return (NULL);
	substr = ft_strncpy(substr, s + start, s_len);
	return (substr);
}
