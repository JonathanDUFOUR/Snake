# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 21:34:54 by jodufour          #+#    #+#              #
#    Updated: 2021/04/12 13:26:12 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	snake
CC		=	g++ -c -o
LINKER	=	g++
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
			${CLASSES}				\
			main.cpp				\
			draw.cpp				\
			pause.cpp				\
			input.cpp				\
			setup.cpp				\
			update.cpp				\
			displayScore.cpp		\
			cellAvailable.cpp		\
			rdmSpawnPlayer.cpp		\
			rdmSpawnFruit.cpp		\
			drawSnakeCell.cpp		\
			drawFruitCell.cpp		\
			drawEmptyCell.cpp		\
			printGameOver.cpp		\
			drawLeftWallCell.cpp	\
			drawRightWallCell.cpp	\
			drawHorizontalWall.cpp	\

OBJS	:=	${SRCS:.cpp=.o}
OBJS	:=	${addprefix ${OBJD}, ${OBJS}}
DEPS	:=	${OBJS:.o=.d}

CPPFLAGS	=	-Wextra -Wall -I ${INCLUDE} -MMD
LDFLAGS		=	-lncurses

all:	${NAME}

${NAME}:	${OBJS}
	${LINKER} $^ ${LDFLAGS} ${OUTPUT_OPTION}

-include ${DEPS}

${OBJD}%.o:	${SRCD}%.cpp
	${MAKEDIR} ${OBJD}
	${CC} $@ ${CPPFLAGS} $<
	
${OBJD}%.o:	${CLASSD}%.cpp
	${MAKEDIR} ${OBJD}
	${CC} $@ ${CPPFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME}

re:	fclean all

.PHONY:	all, clean, fclean, re
