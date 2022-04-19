/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:49:56 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/20 13:02:12 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	fil;
	int	col;

	fil = 1;
	col = 1;
	while (fil <= y)
	{
		while (col <= x)
		{
			if ((col == 1 || col == x) && (fil == 1 || fil == y))
				ft_putchar('o');
			else if ((col > 1 && col < x) && (fil == 1 || fil == y))
				ft_putchar('-');
			else if ((fil > 1 && fil < y) && (col == 1 || col == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 1;
		fil++;
	}
}
