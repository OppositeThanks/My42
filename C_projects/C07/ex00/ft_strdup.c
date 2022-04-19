/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:01:24 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/05 18:27:18 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *cad)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (cad[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (i < ft_strlen(src))
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

int	main(void)
{
	char	idk[];

	idk[] = "lmao i can";
	printf("%s", ft_strdup(idk));
	return (0);
}
