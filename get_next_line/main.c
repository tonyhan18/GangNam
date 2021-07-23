#include <stdio.h>
#include "get_next_line.h"

int		main(void)
{
	char *buf = 0;
	int size;
	int fd;

	fd = open("input.txt", O_RDONLY);
	while ((size = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n",buf);
		free(buf);
	}
	printf("%s\n", buf);
	free(buf);
	return (0);
}