/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:29:01 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/23 21:02:20 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

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

static int	find_sep(char const *s, char sep)
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

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	n_splits;
	size_t	istart;
	char	**res;

	if (!s)
		return (NULL);
	n_splits = ft_count_splits(s, c);
	count = 0;
	istart = 0;
	res = (char **)malloc((n_splits + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (count < n_splits)
	{
		istart += (istart != 0 || s[0] == c) * (find_sep(s + istart, c) + 1);
		res[count] = ft_substr(s, istart, ft_substrlen(s + istart, c));
		if (!res[count])
			return (NULL);
		count++;
		istart++;
	}
	res[count] = NULL;
	return (res);
}
