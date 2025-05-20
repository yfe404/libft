/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:51:06 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/26 22:39:34 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include <stdint.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n > 0 && size > SIZE_MAX / n)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = malloc(n * size);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(ptr, n * size);
	return (ptr);
}
