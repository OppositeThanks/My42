/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:55:05 by sealvare          #+#    #+#             */
/*   Updated: 2022/04/01 12:44:53 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x;
	int y;

	x = 2 + 48;
	y = 3 + 48;
	ft_swap(&x, &y);
	write (1, &x, 1);
	write (1, "\n", 1);
	write (1, &y, 1);
	return (0);
}
