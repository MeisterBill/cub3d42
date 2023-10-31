#ifndef CUB3D_H
# define CUB3D_H

enum e_error
{
	NOT_SUR = 1,
	BAD_TXT = 2,
	BAD_RGB = 3,
	BAD_EXT = 4
};

typedef struct s_game
{
	void *mlx;
	void *mlx_win;
	char **map_data;
	int map_height;
	int map_width;
	int player_x;
	int player_y;
	int img_x;
	int img_y;
	char *file;
} t_game;

# include <math.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"

#endif
