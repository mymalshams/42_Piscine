/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_write.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:01:47 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 23:29:45 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

void	ft_number_write(int number)
{
	if (number == -2147483648)
	{
		ft_number_write(number / 10);
		ft_char_write('8');
	}
	else if (number < 0)
	{
		ft_char_write('-');
		ft_number_write(-number);
	}
	else
	{
		if (number > 9)
			ft_number_write(number / 10);
		ft_char_write('0' + number % 10);
	}
}
