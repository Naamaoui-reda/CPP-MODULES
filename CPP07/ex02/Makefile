# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 19:10:14 by rnaamaou          #+#    #+#              #
#    Updated: 2023/01/08 19:10:15 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= array
SRC				= main1.cpp
OBJ				= $(SRC:.cpp=.o)	

CC				= c++
CXXFLAGS		= -Wall -Wextra -Werror  -std=c++98 
RM				= rm -f
INC				= Array.hpp

all:	$(NAME)

$(NAME):		$(OBJ) $(INC)
				$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
				$(RM) $(OBJ)  
fclean:			clean
				$(RM) $(NAME)

re:				fclean all