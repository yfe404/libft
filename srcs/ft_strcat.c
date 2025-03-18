/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:53:32 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/18 13:53:35 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);

char	*ft_strcat(char *dst, const char *src)
{
	ft_memcpy(dst + ft_strlen(dst), src, ft_strlen(src) + 1);
	return (dst);
}
