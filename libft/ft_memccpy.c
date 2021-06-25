/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:04:44 by chahan            #+#    #+#             */
/*   Updated: 2021/06/25 21:12:04 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char mem_dst;
    unsigned char mem_src;
    size_t i;
    char    search;

    mem_dst = dst;
    mem_src = (unsigned char *)src;
    i = 0;
    search = c;
    while (i < n)
    {
        mem_dst[i] = mem_src[i];
        if (mem_dst[i] == search)
            return (mem_dst + i + 1);
        i++;
    }
    return (NULL);
}
