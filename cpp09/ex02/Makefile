# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 19:31:49 by iarbaiza          #+#    #+#              #
#    Updated: 2024/10/24 19:31:50 by iarbaiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
SRC :=	main.cpp \
		PmergeMe.cpp \

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