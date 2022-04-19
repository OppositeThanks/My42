/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_from_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:09:32 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 21:11:25 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fill_from_left(char **array)
{
	int	i;
	int	j;
	char	param;

	i = 1;
	while (i < 5)
	{
		param = array[i][0];
		if (param == '1')
		{
			if (array[i][1] != '4' && array[i][1] != '0')
				return (1);
			array[i][1] = '4';
		}
		else if (param == '4')
		{
			j = 1;
			while (j < 5)
			{
				if (array[i][j] != j + '0' && array[i][j] != '0')
					return (1);
				array[i][j] = j + '0';
				j++;
			}
		}
		i++;
	}
	return (0);
}