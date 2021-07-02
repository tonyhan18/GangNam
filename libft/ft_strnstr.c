/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:14:36 by chahan            #+#    #+#             */
/*   Updated: 2021/07/02 19:07:13 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t b_size;
	size_t l_size;

	if (*little)
		return ((char *)big);
	b_size = ft_strlen(big);
	l_size = ft_strlen(big);
	if (b_size < l_size || len < l_size)
		return (NULL);
	while (*big)
	{
		if (ft_memcmp(big, little, len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
