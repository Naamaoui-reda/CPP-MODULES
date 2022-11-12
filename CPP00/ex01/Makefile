# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 15:06:10 by rnaamaou          #+#    #+#              #
#    Updated: 2022/09/26 16:52:22 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Contact.cpp PhoneBook.cpp main.cpp

INC = Contact.hpp PhoneBook.hpp

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
