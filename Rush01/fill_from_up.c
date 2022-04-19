/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_from_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:12:58 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 21:13:03 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fill_from_up(char **array)
{
	int i;
	int j;
	char param;

	i = 1;
	while (i < 5)
	{
		param = array[0][i];
		if (param == '1')
		{
			if (array[1][i] != '4' && array[1][i] != '0')
				return (1);
			array[1][i] = '4';
		}
		else if (param == '4')
		{
			j = 1;
			while (j < 5)
			{
				if (array[j][i] != j + '0' && array[j][i] != '0')
					return (1);
				array[j][i] = j + '0';
				j++;
			}
		}
		i++;
	}
	return (0);
}
