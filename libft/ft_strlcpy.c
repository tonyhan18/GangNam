/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:13:09 by chahan            #+#    #+#             */
/*   Updated: 2021/06/30 16:09:11 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize - 1 && *src)
	{
		*(dest++) = (*src++);
		i++;
	}
	dest[i] = '\0';
	while (*src)
	{
		i++;
	}
	return (i);
}
