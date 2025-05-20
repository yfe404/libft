/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:18:16 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/20 14:15:29 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *ptr, size_t size);

static char	ft_iswhitespace(char c, const char *set)
{
	while (set && *set)
		if (*set++ == c)
			return (1);
	return (0);
}

static char	*ft_strnew(size_t size)
{
	char	*ptr;	

	ptr = (char *)malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}

char	*ft_strtrim(char const *s, const char *set)
{
	size_t	pos_start;
	size_t	pos_end;
	size_t	len;
	size_t	pos;
	char	*ret;

	pos = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[pos] && ft_iswhitespace(s[pos], set))
		pos++;
	pos_start = pos;
	pos = ft_strlen(s) - 1;
	while (pos > 0 && pos != pos_start && ft_iswhitespace(s[pos], set))
		pos--;
	pos_end = pos;
	len = pos_end - pos_start + 1;
	if (pos_end < pos_start)
		len = 0;
	ret = ft_strnew(len + 1);
	ret = ft_memcpy(ret, s + pos_start, len);
	ret[len] = '\0';
	return (ret);
}
