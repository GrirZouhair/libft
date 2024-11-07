# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 17:11:35 by zogrir            #+#    #+#              #
#    Updated: 2024/11/07 15:33:15 by zogrir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isascii.c ft_isdigit.c \
ft_isalpha.c ft_isalnum.c ft_isprint.c \
ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_atoi.c ft_itoa.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
ft_strlcat.c ft_strdup.c ft_memcpy.c ft_memmove.c \
ft_memcmp.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_strtrim.c ft_strjoin.c ft_strlcpy.c ft_memchr.c ft_substr.c ft_split.c ft_strmapi.c ft_striteri.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@
 
${NAME}: ${OBJS}
	${LIBC} $@ ${OBJS}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all