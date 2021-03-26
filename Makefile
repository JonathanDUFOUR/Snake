# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 21:34:54 by jodufour          #+#    #+#              #
#    Updated: 2021/03/26 22:30:46 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	snake
CC		=	g++ -c -o
LINKER	=	g++ -o
MAKEDIR	=	mkdir -p
RM		=	rm -rf

INCLUDE	=	includes/
CLASSD	:=	${addprefix ${INCLUDE}, class/}
SRCD	=	srcs/
OBJD	=	objs/

CLASSES	=	\
			snake.cpp	\
			fruit.cpp

SRCS	=	\
			${CLASSES}			\
			main.cpp			\
			draw.cpp			\
			input.cpp			\
			setup.cpp			\
			update.cpp			\
			displayScore.cpp	\
			cellAvailable.cpp	\
			rdmSpawnPlayer.cpp	\
			rdmSpawnFruit.cpp

OBJS	:=	${SRCS:.cpp=.o}
OBJS	:=	${addprefix ${OBJD}, ${OBJS}}

CPPFLAGS	=	-Wextra -Wall -I ${INCLUDE} -I ${CLASSD}

all:	${NAME}

${NAME}:	${OBJS}
	${LINKER} ${NAME} ${OBJS}

${OBJD}%.o:	${SRCD}%.cpp
	${MAKEDIR} ${OBJD}
	${CC} $@ ${CPPFLAGS} $^
	
${OBJD}%.o:	${CLASSD}%.cpp
	${MAKEDIR} ${OBJD}
	${CC} $@ ${CPPFLAGS} $^

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME}

re:	fclean all

.PHONY:	all, clean, fclean, re
