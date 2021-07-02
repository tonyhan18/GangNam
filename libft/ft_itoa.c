/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:11:37 by chahan            #+#    #+#             */
/*   Updated: 2021/07/02 19:00:00 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n)
{
	int		len;

	len = (n < 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	sign = (n < 0) ? -1 : 1;
	len = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	n = n * sign;
	while (len >= 0)
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
