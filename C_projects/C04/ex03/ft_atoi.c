/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:21:47 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/02 11:10:19 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg_sign;
	int	nbr;

	i = 0;
	neg_sign = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg_sign++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (neg_sign % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

int	main(int argc, char **argv)
{
	int	x;

	if (argc == 2)
	{
		x = ft_atoi(argv[1]);
		printf("%d", x);
	}
	return (0);
}
