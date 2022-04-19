/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:31:04 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/31 16:32:44 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	x;

	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		write(1, &x, 1);
		i++;
	}
}

/*int main(void)
{
	char	tf[] = "sdfafgsrtrstrhrthesf";

	ft_putstr(tf);
}
*/