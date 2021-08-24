/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:21:50 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 06:33:11 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>

#include "display_file.h"

bool	parse_arguments(int argc, char **argv)
{
	if (argc < 2)
		str_write(ERR, MSG_ERR_NO_FILE);
	else if (argc > 2)
		str_write(ERR, MSG_ERR_TOO_MANY_ARGS);
	else
	{
		if (!display_file(argv[1]))
			str_write(ERR, MSG_ERR_CANNOT_READ);
		else
			return (true);
	}
	return (false);
}

int		main(int argc, char **argv)
{
	return(parse_arguments(argc, argv) ? 0 : 1);
}