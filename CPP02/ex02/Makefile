# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 07:59:06 by rnaamaou          #+#    #+#              #
#    Updated: 2022/11/17 07:59:08 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Fixed.cpp main.cpp

INC = Fixed.hpp

OBJ_FILE = ${FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILE} ${INC}
	${CC} ${CXXFLAGS} ${OBJ_FILE} -o $@

%.o : %.cpp ${INC}
	${CC} ${CXXFLAGS}  -c $< -o $@

clean :
	rm -f ${OBJ_FILE}
fclean : clean
	rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean