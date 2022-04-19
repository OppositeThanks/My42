/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:15:39 by lperrin           #+#    #+#             */
/*   Updated: 2022/03/25 09:20:11 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	int alphabet;

	alphabet	= 'a';
	while(alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

int main()
{
	ft_print_alphabet();
}
