/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:14:47 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/10 13:15:27 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s && s[count])
		count++;
	return (count);
}
