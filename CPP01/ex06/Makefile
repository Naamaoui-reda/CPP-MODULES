# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 19:46:03 by rnaamaou          #+#    #+#              #
#    Updated: 2022/10/19 19:46:04 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Harl.cpp main.cpp

INC = Harl.hpp


OBJ_FILE = ${FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILE} ${INC}
	${CC} ${CFLAGS} ${OBJ_FILE} -o $@

%.o : %.cpp ${INC}
	${CC} ${CFLAGS}  -c $< -o $@

clean :
	rm -f ${OBJ_FILE}
fclean : clean
	rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean