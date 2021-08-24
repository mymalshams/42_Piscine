/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:02:13 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 23:30:14 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"
#include "ft_char.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
	{
		ft_char_write_to(fd, *str);
		str++;
	}
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
