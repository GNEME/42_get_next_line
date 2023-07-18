#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*
 * An example of use
 * you can read in multiple files at the same time
 * */

int     main(int ac, char **argv)
{
	char *p;
	int fd;
	int fd2;

	if (ac != 3)
	{
		printf("Enter two arguments\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	p = get_next_line(fd);
	printf("The 1st line of %s is :%s\n", argv[1], p);
	free(p);
	p = get_next_line(fd2);
	printf("The 1st line of %s is :%s\n", argv[2], p);
	free(p);
	p = get_next_line(fd);
	printf("The 2nd line of %s is :%s\n", argv[1], p);
	free(p);
	p = get_next_line(fd2);
	printf("The 2nd line of %s is :%s\n", argv[2], p);
	free(p);
	printf("The next lines of %s :\n", argv[2]);
	while (1)
	{
		p = get_next_line(fd2);
		if (!p)
			break ;
		printf("%s", p);
		free(p);
	}
	close(fd);
	close(fd2);
	return (0);
}
