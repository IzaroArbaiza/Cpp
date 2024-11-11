# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 10:53:50 by iarbaiza          #+#    #+#              #
#    Updated: 2024/10/01 12:28:39 by iarbaiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = conversor
SRC :=	main.cpp \
		ScalarConverter.cpp \

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