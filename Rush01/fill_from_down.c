/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_from_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:13:25 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 21:13:42 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fill_from_down(char **array)
{
	int i;
	int j;
	char param;

	i = 1;
	while (i < 5)
	{
		param = array[5][i];
		if (param == '1')
		{
			if (array[4][i] != '4' && array[4][i] != '0')
				return (1);
			array[4][i] = '4';
		}
		else if (param == '4')
		{
			j = 1;
			while (j < 5)
			{
				if (array[5 - j][i] != j + '0' && array[5 - j][i] != '0')
					return (1);
				array[5 - j][i] = j + '0';
				j++;
			}
		}
		i++;
	}
	return (0);
}
