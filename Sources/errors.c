#include "../Includes/cub3d.h"

void *ft_print_errors(int err_type, char *str)
{
	if (err_type == NOT_SUR)
		ft_putstr_fd("Map is not surrounded by walls\n", 2);
	else if (err_type == BAD_TXT)
		ft_putstr_fd("Wrong path to texture pack\n", 2);
	else if (err_type == BAD_RGB)
		ft_putstr_fd("RGB color doesn't exist\n", 2);
	else if (err_type == BAD_EXT)
		ft_putstr_fd("Map must have .cub extension\n", 2);
	ft_putendl_fd(str, 2);
	return (NULL);
}
