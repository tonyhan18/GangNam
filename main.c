#include <stdio.h>
#include "get_next_line.h"

int		main(void)
{
	char *line = 0;
	int size;
	int fd;

	fd = open("input.txt", O_RDONLY);
	while ((size = get_next_line(fd, &line)) > 0)
	{
		printf("%s %d\n",line,size);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	return (0);
}