# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 21:59:12 by rnaamaou          #+#    #+#              #
#    Updated: 2023/01/10 21:59:13 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Stack
SRC				= main.cpp 
OBJ				= $(SRC:.cpp=.o)	

CC				= c++
CXXFLAGS		= -Wall -Wextra -Werror  -std=c++98 
RM				= rm -f
INC				= MutantStack.hpp

all:	$(NAME)

$(NAME):		$(OBJ) $(INC)
				$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
				$(RM) $(OBJ)  
fclean:			clean
				$(RM) $(NAME)

re:				fclean all