/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:18:16 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 21:25:07 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);

static char	ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
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
	while (s[pos] && ft_iswhitespace(s[pos]))
		pos++;
	pos_start = pos;
	pos = ft_strlen(s) - 1;
	while (pos > 0 && pos != pos_start && ft_iswhitespace(s[pos]))
		pos--;
	pos_end = pos;
	len = pos_end - pos_start + 1;
	if (pos_end < pos_start)
		len = 0;
	ret = ft_strsub(s, pos_start, len);
	return (ret);
}
