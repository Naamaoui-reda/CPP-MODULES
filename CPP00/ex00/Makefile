# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:51:25 by rnaamaou          #+#    #+#              #
#    Updated: 2022/09/19 17:47:49 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

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
.PHONY :all clean fclean
