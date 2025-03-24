/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:56:50 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/24 19:56:51 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const	char *s1, const char *s2);

int	ft_strequ(char const *s1, char const *s2)
{
	return (!ft_strcmp(s1, s2));
}
