/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:41:10 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/09 13:47:51 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (\
	c == '\f' || \
	c == '\n' || \
	c == '\r' || \
	c == '\t' || \
	c == '\v' || \
	c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	pos;
	int	result;

	sign = 0;
	pos = 0;
	result = 0;
	while (nptr && ft_isspace(nptr[pos]))
		pos++;
	if (nptr && nptr[pos] && (nptr[pos] == '-' || nptr[pos] == '+'))
		sign = nptr[pos++] == '-';
	while (nptr && nptr[pos] && (nptr[pos] < '9' && nptr[pos] > '0'))
	{
		result = result * 10 + nptr[pos] - '0';
		pos++;
	}
	return (sign * -result + !sign * result);
}
