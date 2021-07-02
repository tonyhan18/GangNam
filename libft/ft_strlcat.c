/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:33:58 by chahan            #+#    #+#             */
/*   Updated: 2021/06/30 16:09:16 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	while (*src && i < dstsize - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	dest[i] = '\0';
	while (*src)
	{
		i++;
	}
	return (i);
}
