/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:06:04 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/20 15:01:41 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	ft_bzero(void *ptr, size_t size);

static char	*ft_strnew(size_t size)
{
	char	*ptr;	

	ptr = (char *)malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	count;

	count = 0;
	new_s = ft_strnew(ft_strlen(s) + 1);
	if (s == NULL || f == NULL)
		return (NULL);
	while (new_s && s[count])
	{
		new_s[count] = f(count, s[count]);
		count++;
	}
	return (new_s);
}
