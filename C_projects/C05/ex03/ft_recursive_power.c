/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:56:48 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 12:44:20 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (aux > aux * nb)
	{
		return (0);
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (aux * ft_recursive_power(aux, (power - 1)));
	else
		return (aux);
}

/*int	main(void)
{
	int	x;

	x = ft_recursive_power(7, 6);
	printf("%d", x);
	return (0);
}
*/