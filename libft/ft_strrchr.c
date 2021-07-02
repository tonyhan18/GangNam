/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:21:44 by chahan            #+#    #+#             */
/*   Updated: 2021/06/30 16:26:04 by chahan           ###   ########.fr       */
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
			return &(s[i]);
		i--;
	}
	return (NULL);
}
