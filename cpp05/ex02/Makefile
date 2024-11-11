# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 12:42:08 by iarbaiza          #+#    #+#              #
#    Updated: 2024/08/27 11:34:23 by iarbaiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
SRC :=	main.cpp \
		AForm.cpp \
		Bureaucrat.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

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
		$(RM) $(NAME) *_shrubbery
		
re : fclean all

.PHONY : all clean fclean re