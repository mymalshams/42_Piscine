# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 06:42:36 by malshams2         #+#    #+#              #
#    Updated: 2021/08/24 07:05:58 by malshams2        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_YELLOW_B=\033[1;33m
C_LIGHT_RED_B=\033[0;91m
C_WHITE=\033[0;97m
C_RESET=\033[0;39m

SRCS	= ./srcs/main.c ./srcs/display_file.c ./srcs/string_utils.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_display_file
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

re : fclean all