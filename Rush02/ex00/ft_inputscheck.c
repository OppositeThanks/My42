/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputscheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:31:10 by jhurtado          #+#    #+#             */
/*   Updated: 2022/04/06 09:54:46 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	checkinput(int argc, char **argv, char **nb, char **dictpath)
{
	if (argc == 2)
	{
		*dictpath = "numbers.dict";
		*nb = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*dictpath = argv[1];
		*nb = argv[2];
		return (1);
	}
	return (0);
}

int	check_nb(char *nb)
{
	int	i;

	i = -1;
	while (nb[++i])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	if (i > 10)
		return (0);
	return (1);
}
