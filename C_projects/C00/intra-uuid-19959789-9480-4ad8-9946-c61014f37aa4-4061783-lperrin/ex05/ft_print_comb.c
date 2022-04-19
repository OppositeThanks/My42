/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:07:55 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/21 17:31:12 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff3chi(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	p;
	char	s;
	char	d;

	p = '0';
	while (p <= '7')
	{
		s = p + 1;
		while (s <= '8')
		{
			d = s + 1;
			while (d <= '9')
			{
				ft_aff3chi(p, s, d);
				d++;
			}
			s++;
		}
		p++;
	}
}
