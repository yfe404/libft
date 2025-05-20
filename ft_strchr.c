/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:52 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/26 15:27:31 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	pos;

	pos = 0;
	len = ft_strlen(s);
	c %= 128;
	while (s && (pos <= len))
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
		pos++;
	}
	return (NULL);
}
