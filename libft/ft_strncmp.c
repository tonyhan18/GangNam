/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:34 by chahan            #+#    #+#             */
/*   Updated: 2021/07/01 17:33:35 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char * b1;
	unsigned char * b2;
	size_t i;

	i = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (s1 == 0 && s2 == 0)
		return (NULL);
	else if(b1 == 0 || b2 == 0)
		return (b1==0 ? -1 : 1);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}