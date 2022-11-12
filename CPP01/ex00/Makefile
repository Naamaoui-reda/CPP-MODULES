# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:17:03 by rnaamaou          #+#    #+#              #
#    Updated: 2022/10/18 15:17:04 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

INC = Zombie.hpp

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