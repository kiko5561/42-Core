# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 19:16:04 by selow             #+#    #+#              #
#    Updated: 2025/05/20 15:45:13 by selow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
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
	ft_tolower.c \
	ft_toupper.c \
	ft_itoa.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_isascii.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_strncmp.c \
	ft_strlcat.c \
	ft_putnbr_fd.c \

BONUSES =	ft_lstsize.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstmap.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus: $(BONUSES:.c=.o)
	$(AR) $(NAME) $^

clean:
	rm -f *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean bonus all clean
