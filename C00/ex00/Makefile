# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 11:03:34 by Tanguy            #+#    #+#              #
#    Updated: 2022/01/24 14:57:27 by tbillon          ###   ########.fr        #
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

RM	= rm -rf

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
		@$(RM) *.o
		@printf "$(ERASE)$(RED)-> All files *.o cleaned$(END)\n"

fclean:	clean
		@$(RM) megaphone
		@printf "$(ERASE)$(RED)-> Executable megaphone cleaned$(END)\n"

re: fclean all