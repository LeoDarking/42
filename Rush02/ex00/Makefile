# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 21:52:47 by rabi-rac          #+#    #+#              #
#    Updated: 2019/07/21 21:52:51 by rabi-rac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		rush02.c resources1.c resources2.c resources3.c resources4.c resources5.c ft_split.c ft_strjoin.c

OBJS	=		${SRCS:.c=.o}

NAME	=		rush-02

CC		=		gcc

CFLAGS	=		-Wall -Werror -Wextra -I./

RM 		=		rm -rf

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				${CC} ${CFLAG} -o ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re: 			fclean all

.PHONY:			all clean fclean re
