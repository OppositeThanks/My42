/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:45:56 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/19 22:58:04 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	hor;
	int	ver;

	hor = 1;
	ver = 1;
	while (hor <= y)
	{
		while (ver <= x)
		{
			if (ver == 1 && (hor == 1 || hor == y))
				ft_putchar('A');
			else if ((hor == 1 || hor == y) && (ver > 1 && ver < x))
				ft_putchar('B');
			else if ((hor > 1 && hor < y) && (ver == 1 || ver == x))
				ft_putchar('B');
			else if (ver == x && (hor == 1 || hor == y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			ver++;
		}
		ft_putchar('\n');
		ver = 1;
		hor++;
	}
}
