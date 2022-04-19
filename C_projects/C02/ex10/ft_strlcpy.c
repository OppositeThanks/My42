/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:41:28 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/29 10:42:23 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	ind;

	count = 0;
	ind = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[ind] != '\0' && ind < (size - 1))
		{
			dest[ind] = src[ind];
			ind++;
		}
		dest[ind] = '\0';
	}
	return (count);
}
