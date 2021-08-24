/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:40:22 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/18 18:20:43 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
