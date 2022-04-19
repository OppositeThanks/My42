/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:19:56 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 18:43:51 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	ndiv;

	ndiv = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (ndiv <= nb / 2)
	{
		if (nb % ndiv == 0)
		{
			return (0);
		}
		ndiv++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(5));
	return (0);
}
*/