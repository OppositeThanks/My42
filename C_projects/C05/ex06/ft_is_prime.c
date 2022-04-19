/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:12:26 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 10:05:58 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
{
	printf("%d", ft_is_prime(44));
	return (0);
}
*/