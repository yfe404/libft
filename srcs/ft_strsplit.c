/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:54:55 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/03/25 12:54:55 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

static size_t	ft_count_splits(char const *s, char c)
{
	size_t	pos;
	size_t	count;

	pos = 0;
	count = 0;
	while (s && s[pos])
	{
		while (s[pos] && s[pos] == c)
			pos++;
		if (s[pos] && s[pos] != c)
			count++;
		while (s[pos] && s[pos] != c)
			pos++;
	}
	return (count);
}

static int	ft_find_next_sep(char const *s, char sep)
{
	int	pos;

	pos = 0;
	while (s && s[pos])
	{
		if (s[pos] == sep)
		{
			while (s[pos + 1] == sep)
				pos++;
			return (pos);
		}
		pos++;
	}
	return (-1);
}

static size_t	ft_substrlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s && s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	count;
	size_t	n_splits;
	size_t	idx_begin;
	size_t	substr_len;
	char	**res;

	if (!s)
		return (NULL);
	n_splits = ft_count_splits(s, c);
	count = 0;
	idx_begin = 0;
	res = (char **)malloc((n_splits + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (count < n_splits)
	{
		idx_begin += ft_find_next_sep(s + idx_begin, c) + 1;
		substr_len = ft_substrlen(s + idx_begin, c);
		res[count] = ft_strsub(s, idx_begin, substr_len);
		if (!res[count])
			return (NULL);
		count++;
	}
	res[count] = NULL;
	return (res);
}
