# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:17:42 by rnaamaou          #+#    #+#              #
#    Updated: 2022/10/18 15:17:43 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = addr

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp


OBJ_FILE = ${FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILE} 
	${CC} ${CFLAGS} ${OBJ_FILE} -o $@

%.o : %.cpp
	${CC} ${CFLAGS}  -c $< -o $@

clean :
	rm -f ${OBJ_FILE}
fclean : clean
	rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean