# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malshams2 <malshams2@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 07:49:55 by malshams2         #+#    #+#              #
#    Updated: 2021/08/24 07:50:04 by malshams2        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_atoi.c ./srcs/ft_char_write.c ./srcs/ft_is.c ./srcs/ft_number_write.c ./srcs/ft_operation.c ./srcs/ft_str_write.c ./srcs/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= do-op
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
	norminette */*.[ch]

find_sources :
	@find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '