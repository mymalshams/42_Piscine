/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:34:00 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 07:04:46 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <stdbool.h>

# define IN 0
# define OUT 1
# define ERR 2
# define BUFFER_SIZE 1024

void	stdin_loop();

bool	cat(char **paths, int count, int offset);

void	str_write(int fd, char *str);

#endif