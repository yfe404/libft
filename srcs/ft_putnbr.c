/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:56:17 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 22:59:55 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(const char *s);

void	ft_putnbr(int n)
{
	int				sign;
	char			temp[12];
	unsigned int	pos;

	sign = n < 0;
	pos = 10;
	temp[11] = '\0';
	if (n == 0)
		temp[pos--] = '0';
	while (n)
	{
		temp[pos--] = (!sign * (n % 10)) + (-sign * (n % -10)) + '0';
		n = n / 10;
	}
	if (sign)
		temp[pos--] = '-';
	ft_putstr(&temp[pos + 1]);
}
