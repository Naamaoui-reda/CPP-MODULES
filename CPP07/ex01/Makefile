# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 19:10:00 by rnaamaou          #+#    #+#              #
#    Updated: 2023/01/08 19:10:01 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= iter
SRC				= main.cpp
OBJ				= $(SRC:.cpp=.o)	

CC				= c++
CXXFLAGS		= -Wall -Wextra -Werror  -std=c++98 
RM				= rm -f
INC				= iter.hpp

all:	$(NAME)

$(NAME):		$(OBJ) $(INC)
				$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
				$(RM) $(OBJ)  
fclean:			clean
				$(RM) $(NAME)

re:				fclean all