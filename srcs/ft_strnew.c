/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:48:20 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/23 12:48:20 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *ptr, size_t size);

char	*ft_strnew(size_t size)
{
	char	*ptr;	

	ptr = (char *)malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}
