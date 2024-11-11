# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 13:43:29 by iarbaiza          #+#    #+#              #
#    Updated: 2024/09/17 13:43:39 by iarbaiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
SRC :=	main.cpp \

CXX = c++
RM := rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS):%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re