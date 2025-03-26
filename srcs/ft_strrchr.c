/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:07:10 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/25 13:14:10 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	int		pos;

	len = ft_strlen(s);
	pos = len;
	c %= 128;
	while (s && (pos >= 0))
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
		pos--;
	}
	return (NULL);
}
