# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 17:24:36 by rnaamaou          #+#    #+#              #
#    Updated: 2022/09/19 17:35:41 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = n

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp tests.cpp

INC = Account.hpp

OBJ_FILE = ${FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILE} ${INC}
	${CC} ${CFLAGS} ${OBJ_FILE} -o $@

%.o : %.cpp
	${CC} ${CFLAGS}  -c $< -o $@

clean :
	rm -f ${OBJ_FILE}
fclean : clean
	rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean
