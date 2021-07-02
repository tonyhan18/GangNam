/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:21:44 by chahan            #+#    #+#             */
/*   Updated: 2021/07/02 14:06:37 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		i;

	find = c;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if(s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
