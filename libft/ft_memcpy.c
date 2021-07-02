/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:26:58 by chahan            #+#    #+#             */
/*   Updated: 2021/06/30 16:04:19 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mem_dst;
	unsigned char	*mem_src;
	size_t			i;

	mem_dst = dst;
	mem_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*(mem_dst++) = *(mem_src++);
	return (dst);
}
