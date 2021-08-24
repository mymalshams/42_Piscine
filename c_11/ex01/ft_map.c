/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 07:11:10 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 23:10:48 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*results;

	results = malloc(length * sizeof(int));
	if (!results)
		return (0);
	i = 0;
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		i++;
	}
	return (results);
}
