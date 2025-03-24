/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:03:54 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 21:03:54 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strnew(size_t size);
size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = ft_strnew(s1_len + s2_len + 1);
	if (!(joined && s1 && s2))
		return (NULL);
	joined = ft_strcpy(joined, s1);
	ft_strcpy(joined + s1_len, s2);
	return (joined);
}
