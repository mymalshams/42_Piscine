/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:34:00 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/24 06:42:07 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <stdbool.h>

# define BUFFER_SIZE 1024

# define MSG_ERR_NO_FILE "File name missing.\n"
# define MSG_ERR_TOO_MANY_ARGS "Too many arguments.\n"
# define MSG_ERR_CANNOT_READ "Cannot read file.\n"

# define IN 0
# define OUT 1
# define ERR 2

bool	display_file(char *path);

void	str_write(int fd, char *str);

#endif