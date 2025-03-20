/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:59:05 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/20 16:59:12 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size)
{
	void	*ptr;	

	ptr = malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}
