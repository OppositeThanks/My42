/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:02:00 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/05 21:27:05 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*store;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	store = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (store);
}

/*int	main(void)
{
	int	*d;
	int	i;

	i = 0;
	d = ft_range(5, 15);
	while (d[i] != '\0')
	{
		printf("%d", d[i]);
		i++;
	}
}
Create a function ft_range which returns an array of ints. 
This int array should contain all values between min and max.
• Min included - max excluded.*/