/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:40:28 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/03 14:42:49 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_number
{
	unsigned int	nbr;
	char			*text;
}					t_number;
unsigned int		ft_atoi(char *str);
void				ft_putstr(char *str);
void				ft_putchar(char c);
int					ft_error(char error);
int					checkinput(int argc, char **argv, char **nb,
						char **dictpath);
int					check_nb(char *nb);

#endif
