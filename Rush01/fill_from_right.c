/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_from_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:11:40 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 21:12:07 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fill_from_right(char **array)
{
	int i;
	int j;
	char param;

	i = 1;
	while (i < 5)
	{
		param = array[i][5];
		if (param == '1')
		{
			if (array[i][4] != '4' && array[i][4] != '0')
				return (1);
			array[i][4] = '4';
		}
		else if (param == '4')
		{
			j = 1;
			while (j < 5)
			{
				if (array[i][5 - j] != j + '0' && array[i][5 - j] != '0')
					return (1);
				array[i][5 - j] = j + '0';
				j++;
			}
		}
		i++;
	}
	return (0);
}
