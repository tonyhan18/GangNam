/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:33:15 by chahan            #+#    #+#             */
/*   Updated: 2021/07/02 19:06:12 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_splict_cnt(char const *s, char c)
{
	size_t	split_str;
	size_t	i;

	split_str = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		else if (s[i] != c)
		{
			split_str++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (split_str);
}

static size_t	ft_find_split(char const *s, char c, size_t *str_len)
{
	size_t start;
	size_t end;
	size_t i;

	start = 0;
	end = 0;
	i = 0;
	while (s[i] == c)
		i++;
	start = i;
	while (s[i] != c && s[i] != '\0')
		i++;
	end = i;
	*str_len = end - start;
	return (i);
}

static char		**ft_free_mem(char **mem)
{
	size_t i;

	i = 0;
	while (mem[i])
		free(mem[i++]);
	free(mem);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**new_mem;
	size_t	split_str;
	size_t	row_idx;
	size_t	col_idx;
	size_t	str_len;

	if (!s)
		return (NULL);
	split_str = ft_get_splict_cnt(s, c);
	if (!(new_mem = (char**)malloc(sizeof(char *) * split_str)))
		return (NULL);
	row_idx = 0;
	col_idx = 0;
	while (row_idx < split_str)
	{
		col_idx += ft_find_split(s + col_idx, c, &str_len);
		new_mem[row_idx] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (!new_mem[row_idx])
			return (ft_free_mem(new_mem));
		ft_strlcpy(new_mem[row_idx++], s + col_idx - str_len, str_len + 1);
	}
	new_mem[col_idx] = NULL;
	return (new_mem);
}
