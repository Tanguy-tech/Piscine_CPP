# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 09:10:05 by Tanguy            #+#    #+#              #
#    Updated: 2021/12/16 10:16:24 by Tanguy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ERASE       =   \033[2K\r
GREY        =   \033[30m
RED         =   \033[31m
GREEN       =   \033[32m
YELLOW      =   \033[33m
BLUE        =   \033[34m
PINK        =   \033[35m
CYAN        =   \033[36m
WHITE       =   \033[37m
BOLD        =   \033[1m
UNDER       =   \033[4m
SUR         =   \033[7m
END         =   \033[0m

NAME = MyPhoneBook

RM	= rm -rf

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = contact.cpp main.cpp phonebook.cpp

INCS = contact.class.hpp phonebook.class.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

%.o:%.cpp	$(INCS)
			$(CC) $(FLAGS) -c $< -o $@

clean:
		@$(RM) *.o
		@printf "$(ERASE)$(RED)-> All files *.o cleaned$(END)\n"

fclean:	clean
		@$(RM) MyPhoneBook
		@printf "$(ERASE)$(RED)-> Executable MyPhoneBook cleaned$(END)\n"

re: fclean all