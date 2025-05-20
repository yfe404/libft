/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:24:51 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/10 12:24:53 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (s && (count < n))
		*((char *)(s + count++)) = c;
	return (s);
}
