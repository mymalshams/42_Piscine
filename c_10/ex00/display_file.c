/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:54:25 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 06:33:10 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include "display_file.h"

bool	display_file(char *path)
{
	int	f_descriptor;
	unsigned int	byte_read;
	char	buffer[BUFFER_SIZE];

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (false);
	while ((byte_read = read(file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		if (byte_read == (unsigned int) - 1)
			return (false);
		write(1, &buffer[0], byte_read);
	}
	close(file_descriptor);
	return (true);
}
