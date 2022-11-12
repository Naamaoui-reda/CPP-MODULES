# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 19:45:37 by rnaamaou          #+#    #+#              #
#    Updated: 2022/11/09 15:22:29 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = OpRp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = change.cpp main.cpp


OBJ_FILE = ${FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILE} 
	${CC} ${CFLAGS} ${OBJ_FILE} -o $@

%.o : %.cpp change.hpp
	${CC} ${CFLAGS}  -c $< -o $@

clean :
	rm -f ${OBJ_FILE}
fclean : clean
	rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean