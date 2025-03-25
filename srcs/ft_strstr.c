/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:44:02 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/25 13:44:04 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ret;
	size_t	needle_len;

	if (!(haystack && needle))
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	ret = ft_strchr(haystack, needle[0]);
	while (ret)
	{
		if (ft_strnequ(ret, needle, needle_len))
			return (ret);
	}
	return (NULL);
}
