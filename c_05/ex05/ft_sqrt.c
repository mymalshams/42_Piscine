/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:45:27 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/18 05:14:28 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int)nb)
		index++;
	index -= 1;
	return (index * index == (unsigned int)nb ? index : 0);
}
