/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:44:55 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/15 11:45:06 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*_src;
	unsigned char		*_dest;

	if ((src < dest) && ((src + n) >= dest))
	{
		_src = src + n - 1;
		_dest = dest + n - 1;
		while (n--)
			*_dest-- = *_src--;
	}
	else
	{
		_src = src;
		_dest = dest;
		while (n--)
			*_dest++ = *_src++;
	}
	return (dest);
}
