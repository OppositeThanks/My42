/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/03/26 19:02:07 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/26 19:02:07 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
int	cuenta_argumentos(char *str);
char	**create_array(char *input);
int	fill_from_left(char **array);
int	fill_from_right(char **array);
int	fill_from_up(char **array);
int	fill_from_down(char **array);
int	fill(char **array);
void	print_array(char **array, int size, int sub_size);
void	clean(char **array, int size);
int 	consult(char *input);

int	main(int items, char **args)
{
	char **array;
	int nargumentos;
	int error;

	if (items == 2)
	{
		nargumentos = cuenta_argumentos(args[1]);
		error = consult(args[1]);
		if (error == 1)
		{
			write(1, "Error", 5);
		}
		if (nargumentos != 16)
		{
			write(1, "Error", 5);
			return (0);
		}
		array = create_array(args[1]);
		if (fill(array) == 0)
		{
			print_array(array, 5, 5);
		}
		else
		{
			write(1, "Error\n", 6);
			clean(array, 6);
			return (0);
		}
	}
	else
		write(1, "Error\n", 6);
		
}

int	fill(char **array)
{
	if (fill_from_left(array) == 1)
		return (1);
	if (fill_from_right(array) == 1)
		return (1);
	if (fill_from_up(array) == 1)
		return (1);
	if (fill_from_down(array) == 1)
		return (1);
	return (0);
}

void	print_array(char **array, int size, int sub_size)
{
	int i;
	int j;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < sub_size)
		{
			ft_putchar(array[i][j]);
			j++;
			if (j != sub_size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

void	clean(char **array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
