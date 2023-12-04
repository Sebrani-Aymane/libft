# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 09:41:55 by asebrani          #+#    #+#              #
#    Updated: 2023/11/23 01:33:12 by asebrani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rcs

SRC = ft_memset.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_isalnum.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c ft_strlcpy.c\
 ft_strlcat.c ft_strchr.c ft_isascii.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
 ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
 ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BNS = $(SRC_BNS:.c=.o)

ALL = $(OBJ) $(OBJ_BNS)

NAME = libft.a

all : $(NAME)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus : $(OBJ_BNS)
	$(AR) $(NAME) $(OBJ_BNS)

clean:
	$(RM) $(ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
