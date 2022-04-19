/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:34:54 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/03 14:51:46 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_gen(char *file, t_number *store, int lines, int size);

int	ft_charsize(char *file, int *i)
{
	int		reader2;
	int		size;
	char	c[1];

	size = 0;
	reader2 = open(file, O_RDONLY);
	while (read(reader2, c, 1))
	{
		size++;
		if (c[0] == '\n')
		{
			*i = *i + 1;
		}
	}
	close(reader2);
	return (size);
}

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

int	getmult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(unsigned int n, t_number *store)
{
	int				i;
	unsigned int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
	{
		ft_print(n / mult, store);
		ft_putchar(' ');
	}
	while (store[i].nbr != mult)
		i++;
	ft_putstr(store[i].text);
	if (mult != 0 && n % mult != 0)
	{
		ft_putchar(' ');
		ft_print(n % mult, store);
	}
}

int	main(int ac, char **av)
{
	int			size;
	int			lines;
	t_number	*store;
	char		*dictpath;
	char		*nb;

	lines = 1;
	size = ft_charsize("numbers.dict", &lines);
	store = malloc(sizeof(t_number) * size);
	if (checkinput(ac, av, &nb, &dictpath) == 0 || check_nb(nb) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (store == 0)
		return (ft_error('c'));
	ft_gen(dictpath, store, lines, size);
	ft_print(ft_atoi(nb), store);
	ft_putchar('\n');
	free(store);
	return (0);
}
