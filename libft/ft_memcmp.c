/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:14:36 by chahan            #+#    #+#             */
/*   Updated: 2021/07/01 16:14:41 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;
	size_t i;

	i = 0;
	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	if((b1 == 0 && b2 == 0) || n == 0)
		return (0);
	else if(s1 == 0 || s2 == 0)
		return (s1 == 0 ? -1 : 1);
	while(i < n)
	{
		if(s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
