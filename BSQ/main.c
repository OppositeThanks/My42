/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:26:38 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/07 12:10:41 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_square
{
	int		x;
	int		y;
	int		size;
	char	*ch_square;
}			t_square;

char	*ft_gettext(int reader, char *c, int size)
{
	int		i;
	char	*str_square;

	i = 0;
	str_square = malloc(sizeof(char) * size);
	while (c[0] != '\n' && i < size)
	{
		str_square[i] = c[0];
		read(reader, c, 1);
		i++;
	}
	return (str_square);
}

int	ft_size_row(char *file)
{
	int		reader;
	int		size_row;
	char	c[1];

	size_row = 0;
	reader = open(file, O_RDONLY);
	while (read(reader, c, 1))
	{
		if (c[0] == '\n')
		{
			size_row++;
		}
	}
	close(reader);
	return (size_row - 1);
}

int	ft_size_col(char *file)
{
	int		reader;
	int		size_col;
	char	c[1];

	size_col = 0;
	reader = open(file, O_RDONLY);
	while (c[0] != '\n')
		read(reader, c, 1);
	read(reader, c, 1);
	while (c[0] != '\n')
		read(reader, c, 1);
	read(reader, c, 1);
	while (c[0] != '\n')
	{
		read(reader, c, 1);
		size_col++;
	}
	return (size_col);
}

int	main(int ac, char **av)
{
	int			size_row;
	int			size_col;
	t_square	cor;
	int			sq_size;
	int			i;
	int			reader;
	char		c[0];
	int			x;
	int			y;
	int			nb_char_map;

	i = 0;
	size_row = ft_size_row("example_file");
	size_col = ft_size_col("example_file");
	nb_char_map = size_col * size_row;
	cor = malloc(sizeof(t_square) * nb_char_map);
	if (size_row > size_col)
	{
		//cor[i].size = size_col;
		//cor[i].x = 0;
		//cor[i].y = 0;
		sq_size = size_col * size_row;
		reader = open("example_file", O_RDONLY);
		cor[i].ch_square = ft_gettext(reader, c, sq_size);
		if (cor[i].ch_square == 'o')
		{
			if (//cor[i].size == size_col)
				//cor[i].size--;
			while (x < size_col)
			{
				x++;
				if (x == size_col - 1)
				{
					x = 0;
					y++;
				}
			}
		}
	}
	if (size_row < size_col)
	{
		//cor[i].size = size_row;
		//cor[i].x = 0;
		//cor[i].y = 0;
		sq_size = size_col * size_row;
		reader = open("example_file", O_RDONLY);
		cor[i].ch_square = ft_gettext(reader, c, sq_size);
		if (read(reader, c, 1) == 'o')
		{
			if (//cor[i].size == size_row)
				//cor[i].size--;
			while (x < size_row)
			{
				x++;
				if (x == size_row - 1)
				{
					x = 0;
					y++;
				}
			}
		}
		size = size_row;
	}
	printf("%i", size_col);
}
