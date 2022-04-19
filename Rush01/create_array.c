/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-m <jramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:53:40 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 23:19:52 by jramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_with_input(char **array, char *input);
int		consult_pair(int *up, int *down, int *left, int *right);
int		up_dow(int *_up, int *_down, int i);
int		lef_rig(int *_left, int *_right, int i);
char	**create_array(char *input);

void	fill_with_input(char **array, char *input)
{
	int	i;
	int	reader;

	i = 1;
	reader = 0;
	while (i < 5)
	{
		array[0][i] = input[reader];
		array[5][i] = input[8 + reader];
		array[i][0] = input[16 + reader];
		array[i][5] = input[24 + reader];
		i++;
		reader += 2;
	}
}

char	**create_array(char *input)
{
	char	**array;
	int		i;
	int		j;

	array = malloc(sizeof(char *) * 6);
	i = 0;
	while (i < 6)
	{
		array[i] = malloc(sizeof(char) * 6);
		j = 0;
		while (j < 6)
		{
			*(*(array + i) + j) = '0';
			j++;
		}
		i++;
	}
	fill_with_input(array, input);
		return (array);
}