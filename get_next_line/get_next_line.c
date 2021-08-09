/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:47:02 by chahan            #+#    #+#             */
/*   Updated: 2021/08/09 20:47:04 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*trim(char **str)
{
	int		i;
	char	*ret;

	if (!(*str) || !(**str))
		return (NULL);
	i = 0;
	while ((*str)[i] != '\n' && (*str)[i])
		i++;
	ret = (char *)malloc(sizeof(char) * (i+2));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (*str), i+2);
	*str = ft_strdup(&(*str)[i+1]);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*saved_str;
	char				*buf;
	char				*tmp;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buf)
		return (NULL);
	while (read(fd, buf, BUFFER_SIZE) > 0)
	{
		if (!saved_str)
		{
			saved_str = (char *)malloc(BUFFER_SIZE + 1);
			if (!saved_str)
			{
				free(saved_str);
				free(buf);
				return (NULL);
			}
		}
		tmp = ft_strjoin(saved_str, buf);
		free(saved_str);
		saved_str = tmp;
	}
	return trim(&saved_str);
}

int main()
{
	int fd = open("file", O_RDWR);
	int i = 0;
	while (i < 4)
	{
		printf("%s", get_next_line(fd));
		// get_next_line(fd);
		i++;
	}
	return (0);
}