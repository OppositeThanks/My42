/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:39:33 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/30 20:41:10 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;
	int	i_find;

	i_str = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str] != '\0')
	{
		i_find = 0;
		while (str[i_str + i_find] == to_find[i_find] && str[i_str + i_find] != '\0')
		{
			if (to_find[i_find + 1] == '\0')
				return (&str[i_str]);
			i_find++;
		}
		i_str++;
	}
	return (0);
}
