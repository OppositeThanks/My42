/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_dic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:49:41 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/03 13:43:16 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_getnbr(int reader)
{
	int		i;
	char	*str;
	char	c[1];

	i = 0;
	str = malloc(sizeof(char) * 128);
	read(reader, c, 1);
	while (c[0] == '\n')
	{
		read(reader, c, 1);
	}
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(reader, c, 1);
		i++;
	}
	return (str);
}

char	*ft_gettext(int reader, char *c, int size)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * 128);
	while (c[0] != '\n' && i < size)
	{
		str[i] = c[0];
		read(reader, c, 1);
		i++;
	}
	return (str);
}

int	ft_checkerrors(int reader, t_number *store)
{
	if (reader == -1 || store == 0)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_gen(char *file, t_number *store, int lines, int size)
{
	int		i;
	int		reader;
	char	c[0];

	reader = open(file, O_RDONLY);
	i = 0;
	while ((i <= lines) && (ft_checkerrors(reader, store) == 0))
	{
		store[i].nbr = ft_atoi(ft_getnbr(reader));
		read(reader, c, 1);
		while (c[0] == ' ')
			read(reader, c, 1);
		if (c[0] == ':')
			read(reader, c, 1);
		while (c[0] == ' ')
			read(reader, c, 1);
		store[i].text = ft_gettext(reader, c, size);
		i++;
	}
	close(reader);
}
