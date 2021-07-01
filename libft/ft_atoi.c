/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:48:40 by chahan            #+#    #+#             */
/*   Updated: 2021/07/01 19:48:41 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if(c == ' ' || c == '\t' || c == '\r' ||
				c == '\n' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int		num;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && ft_isspace(str[i])
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0') * sign;
		i++;
	}
	return (num);
}
