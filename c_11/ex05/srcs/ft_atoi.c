/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:01:03 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 23:28:43 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "ft_is.h"

int		ft_atoi(char *str)
{
	int	result;
	int	minus;

	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return (result * minus);
}
