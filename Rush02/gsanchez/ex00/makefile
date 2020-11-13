# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/22 11:06:56 by gsanchez          #+#    #+#              #
#    Updated: 2019/09/22 11:07:05 by gsanchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRC_DIR	=	src
INCLUDE_DIR	=	include
OBJ_DIR	=	obj

SRC	=	${wildcard $(SRC_DIR)/*.c}
OBJ	=	${SRC:${SRC_DIR}/%.c=${OBJ_DIR}/%.o}

CC	=	cc
CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -f

${OBJ_DIR}/%.o:	${SRC_DIR}/%.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}:	$(OBJ)
	${CC} $^ -o $@

all:		${NAME}

clean:
	${RM} ${OBJ}

fclean:		clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re