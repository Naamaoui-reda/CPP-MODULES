# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:18:27 by rnaamaou          #+#    #+#              #
#    Updated: 2022/10/18 15:18:28 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = M3abza

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

INC = HumanA.hpp HumanB.hpp Weapon.hpp

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