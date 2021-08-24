/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:42:48 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/18 06:11:15 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
