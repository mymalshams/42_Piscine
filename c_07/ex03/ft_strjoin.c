/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:15:18 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/18 22:15:58 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = -1;
	while (str[++n])
		;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*dest++)
		;
	dest--;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (start);
}

char	*empty_str(void)
{
	char *holder;

	holder = malloc(1);
	if (!holder)
		return (0);
	*holder = 0;
	return (holder);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		seplen;
	int		strslen;
	int		i;
	char	*holder;

	if (size == 0)
		return (empty_str());
	seplen = ft_strlen(sep);
	strslen = 0;
	i = -1;
	while (++i < size)
		strslen += ft_strlen(strs[i]);
	holder = malloc(strslen + ((size - 1) * seplen) + 1);
	*holder = 0;
	if (!holder)
		return (0);
	i = -1;
	while (++i < size)
	{
		holder = ft_strcat(holder, strs[i]);
		if (i < (size - 1))
			holder = ft_strcat(holder, sep);
	}
	return (holder);
}
