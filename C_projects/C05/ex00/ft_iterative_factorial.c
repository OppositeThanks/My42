/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:14:30 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 13:25:26 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	aux;
	int	i;

	i = 1;
	aux = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		aux *= i;
		i++;
	}
	return (aux);
}

/*int	main(void)
{
	int	x;

	x = ft_iterative_factorial(2);
	printf("%d", x);
	return (0);
}
*/