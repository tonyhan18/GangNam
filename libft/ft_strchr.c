/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:38:44 by chahan            #+#    #+#             */
/*   Updated: 2021/06/30 16:21:37 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = c;
	i = 0;
	while(s[i])
	{
		if (s[i] == find)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
