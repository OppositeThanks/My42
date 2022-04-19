/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:07:16 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/22 13:42:56 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_f2(int paire)
{
	char	dr;
	char	ga;

	dr = (paire % 10) + 48;
	ga = (paire / 10) + 48;
	ft_putchar(ga, dr);
}

void	ft_f1(int pre, int deu)
{
	ft_f2(pre);
	write(1, " ", 1);
	ft_f2(deu);
	if (pre != 98 || deu != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	while (p <= 98)
	{
		s = p + 1;
		while (s <= 99)
		{
			ft_f1(p, s);
			s++;
		}
		p++;
	}
}
