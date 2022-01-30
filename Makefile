# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntesfu <ntesfu@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 18:24:56 by ntesfu            #+#    #+#              #
#    Updated: 2022/01/27 22:16:29 by ntesfu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*-MakeFile -*-

NAME = libft.a
FILES = 
OBJS = ${FILES:.c=.o}
B_OBJS = ${B_FILES:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus: ${B_OBJS}
	ar rc ${NAME} ${B_OBJS}
	
all: ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${B_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean all
