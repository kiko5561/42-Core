# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 19:16:04 by selow             #+#    #+#              #
#    Updated: 2025/05/12 14:44:09 by selow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -g3
CC = gcc
AR = ar rcs
RM = rm -f
INCS = libft.h

SRC =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_strlen.c \
	ft_strdup.c \
	ft_putchar_fd.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strchr.c \
	ft_strtrim.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_strnstr.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

