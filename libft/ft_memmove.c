/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:12:03 by chahan            #+#    #+#             */
/*   Updated: 2021/06/25 21:42:25 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if one array is used
void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char   *mem_dst;
    unsigned char   *mem_src;
    size_t i;

    //dst's addr is more fast than src
    i = 0;
    if (dst < src)
    {
        mem_dst = (unsigned char *)dst;
        mem_src = (unsigned char *)src;
        while(i++ < n)
        {
            *(mem_dst++) = *(mem_src++);
        }
    }else
    {
        mem_dst = (unsigned char *)(dst + (n - 1));
        mem_src = (unsigned char *)(src + (n - 1));
        while (i++ < n)
        {
            *(mem_dst++) = *(mem_src++);
        }
    }
    return (dst);
}