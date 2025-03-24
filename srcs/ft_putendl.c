/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:31:23 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 22:31:41 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	size_t	count;

	count = 0;
	while (s && s[count])
		write(STDOUT_FILENO, &s[count++], 1);
	write(STDOUT_FILENO, "\n", 1);
}
