#include "../Includes/cub3d.h"

int check_extension(char **argv)
{
	int checker;

	checker = 0;
	if (argv[1][ft_strlen(argv[1]) - 4] != '.')
		checker = 1;
	if (argv[1][ft_strlen(argv[1]) - 3] != 'c')
		checker = 1;
	if (argv[1][ft_strlen(argv[1]) - 2] != 'u')
		checker = 1;
	if (argv[1][ft_strlen(argv[1]) - 1] != 'b')
		checker = 1;
	return (checker);
}

int close_window(t_game *game)
{
	int i;

	i = 0;
	if (game->map_data)
	{
		while (game->map_data[i])
		{
			free(game->map_data[i]);
			i++;
		}
		free(game->map_data);
	}
	exit(1);
}

int check_argv(t_game *game, int ac, char **argv)
{
	if (ac != 2)
	{
		write(1, "Error\nUse <./cub3d maps/mapx.cub>\n", 35);
		close_window(game);
	}
	if (check_extension(argv) == 1)
	{
		write(1, "Error\nMap has to be a <.cub> file.\n", 36);
		close_window(game);
	}
	return (0);
}

int	main(int ac, char **argv)
{
	t_game	game;

	game.map_data = NULL;
	check_argv(&game, ac, argv);


}
