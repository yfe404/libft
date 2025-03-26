/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:05:59 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/26 13:06:06 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	size_t	needle_len;

	if (!(haystack && needle))
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	if (needle_len == 0)
		return ((char *)haystack);
	ret = ft_strchr(haystack, needle[0]);
	while (ret && ((ret - haystack) <= (len - needle_len)))
	{
		if (ft_strnequ(ret, needle, needle_len))
			return (ret);
		ret = ft_strchr(ret + 1, needle[0]);
	}
	return (NULL);
}
