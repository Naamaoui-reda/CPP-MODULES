# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 21:50:35 by rnaamaou          #+#    #+#              #
#    Updated: 2022/12/29 21:50:36 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Form
SRC				= main.cpp Bureaucrat.cpp Form.cpp
OBJ				= $(SRC:.cpp=.o)	

CC				= c++
CXXFLAGS		= -Wall -Wextra -Werror  -std=c++98 
RM				= rm -f
INC				= Bureaucrat.hpp Form.hpp

all:	$(NAME)

$(NAME):		$(OBJ) $(INC)
				$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
				$(RM) $(OBJ)  
fclean:			clean
				$(RM) $(NAME)

re:				fclean all