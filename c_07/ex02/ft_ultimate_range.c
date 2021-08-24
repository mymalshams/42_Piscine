/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:37:28 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/19 17:23:09 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int bound;
	int *ptr;
	int i;

	i = 0;
	bound = max - min - 1;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(bound * sizeof(int));
	if (ptr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (i <= bound)
	{
		ptr[i] = min + i;
		i++;
	}
	return (bound + 1);
}
