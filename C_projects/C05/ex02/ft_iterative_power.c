/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:50:48 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 16:39:39 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		aux *= nb;
		power--;
	}
	return (aux);
}

/*int	main(void)
{
	int	x;

	x = ft_iterative_power(-5, 8);
	printf("%d", x);
	return (0);
}
*/