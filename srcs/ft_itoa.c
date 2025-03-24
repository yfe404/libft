/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:47:09 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 22:17:11 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *s, int c, size_t n);

char	*ft_itoa(int n)
{
	int				sign;
	char			temp[12];
	unsigned int	pos;

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
	return (ft_strsub(temp, pos + 1, 10 - pos));
}
