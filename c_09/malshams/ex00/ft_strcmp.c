/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:19:50 by kalmheir          #+#    #+#             */
/*   Updated: 2021/08/22 04:34:15 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	not_null_and_eq(char c1, char c2)
{
	return ((c1 == c2) && c1 && c2);
}

int	ft_strcmp(char *s1, char *s2)
{
	s1--;
	s2--;
	while (not_null_and_eq(*(++s1), *(++s2)))
		;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
