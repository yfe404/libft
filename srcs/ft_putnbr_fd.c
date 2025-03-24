/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:04:18 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 23:04:18 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(const char *s, int fd);

void	ft_putnbr_fd(int n, int fd)
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
	ft_putstr_fd(&temp[pos + 1], fd);
}
