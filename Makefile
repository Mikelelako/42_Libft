# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbennett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 11:25:59 by mbennett          #+#    #+#              #
#    Updated: 2021/10/14 12:35:19 by mbennett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_bzero.c \
	   ft_isprint.c ft_memset.c ft_toupper.c ft_tolower.c ft_strlen.c \
	   ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} $?

bonus: ${OBJS_BONUS}
	ar rcs ${NAME} $?

clean: ${NAME}
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} ${OBJS_BONUS}

re: fclean ${NAME}

rebonus: fclean bonus

.PHONY: clean fclean re all bonus rebonus
