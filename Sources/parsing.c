#include "../Includes/cub3d.h"

int check_mappath(char **argv)
{
	int fd;

	fd = open(argv[1], O_RDONLY);
	close(fd);
	return (0);
}
