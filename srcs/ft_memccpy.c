/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:56:37 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/12 23:58:48 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*_src;
	unsigned char		*_dest;

	_src = src;
	_dest = dest;
	while (n--)
	{
		*_dest = *_src;
		if (*_src == c)
			break ;
		_dest++;
		_src++;
	}
	return (dest);
}
