/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:57:45 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/26 22:25:09 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

static size_t	ft_strnlen(const char	*s, size_t n)
{
	size_t	len;

	len = 0;
	while (s && s[len] && (len < n))
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	pos;

	if (!s)
		return (NULL);
	pos = 0;
	if (start > ft_strlen(s))
		s_len = 0;
	else
		s_len = ft_strnlen((s + start), len);
	substr = (char *)malloc(s_len + 1);
	if (!substr)
		return (NULL);
	substr[s_len] = '\0';
	while (s_len--)
	{
		substr[pos] = s[start + pos];
		pos++;
	}
	return (substr);
}
