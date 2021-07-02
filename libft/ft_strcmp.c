/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:29:37 by chahan            #+#    #+#             */
/*   Updated: 2021/07/01 17:29:38 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *b1;
	unsigned char *b2;

	if(s1 == 0 || s2 == 0)
		return (0);
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while(*b1 && *b2)
	{
		if(*b1 != *b2)
			return (*b1 - *b2);
	}
	return (0);
}