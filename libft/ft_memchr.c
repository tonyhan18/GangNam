/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:04:44 by chahan            #+#    #+#             */
/*   Updated: 2021/07/02 19:00:16 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;
	unsigned char	find;
	size_t			i;

	new_s = (unsigned char *)s;
	find = c;
	i = 0;
	while (i < n)
	{
		if (new_s[i] == c)
		{
			return (new_s + i);
		}
		i++;
	}
	return (0);
}
