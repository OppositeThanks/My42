/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuenta_argumentos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:24 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/27 20:34:00 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char *str)
{
	if ((*str < '1') || (*str > '4'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	cuenta_argumentos(char *str)
{
	int	contador;
	int	i;

	contador = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else if (ft_char_is_numeric(&str[i]) == 1)
		{
			contador++;
			i++;
		}
		else
			return (0);
	}
	return (contador);
}
