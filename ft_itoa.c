/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:47:09 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/20 15:02:09 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *ptr, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);

static char	*ft_strnew(size_t size)
{
	char	*ptr;	

	ptr = (char *)malloc(size);
	if (ptr != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}

char	*ft_itoa(int n)
{
	int				sign;
	char			temp[12];
	unsigned int	pos;
	int				buffsize;
	char			*ret;

	sign = n < 0;
	pos = 10;
	ft_memset(temp, '0', 12);
	temp[11] = '\0';
	if (n == 0)
		pos--;
	while (n)
	{
		temp[pos--] = (!sign * (n % 10)) + (-sign * (n % -10)) + '0';
		n = n / 10;
	}
	if (sign)
		temp[pos--] = '-';
	buffsize = 10 - pos;
	ret = ft_strnew(buffsize + 1);
	ret = ft_memcpy(ret, &temp[pos + 1], buffsize);
	ret[buffsize] = '\0';
	return (ret);
}
