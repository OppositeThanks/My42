/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:10:17 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/29 13:29:16 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
				str[a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	b;
	int	c;

	b = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[b] != '\0')
	{
		if (str[b] >= 'a' && str[b] <= 'z' )
		{
			if (c == 1)
					str[b] -= 32;
			c = 0;
		}
		else if (str[b] >= '0' && str[b] <= '9')
			c = 0;
		else
			c = 1;
		b++;
	}
	return (str);
}
