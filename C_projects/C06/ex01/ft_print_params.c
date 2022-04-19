/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:36:16 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/04 16:44:43 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			while (argv[j][i] != '\0')
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			j++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
