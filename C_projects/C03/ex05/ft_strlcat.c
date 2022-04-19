/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:58:03 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/31 17:00:21 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ddest;
	unsigned int	dsrc;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	ddest = j;
	dsrc = ft_strlen(src);
	if (size == 0 || size <= ddest)
		return (dsrc + size);
	while (src[i] != '\0' && i < size - ddest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ddest + dsrc);
}

int	main(void)
{
	char	src[] = "Mundo 42";
	char	dest[] = "Hola";
    int size = 5;

	printf("El string es: /%d/", ft_strlcat(dest, src, size));
	return (0);
}
