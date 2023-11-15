# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: habu-zua <habu-zua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 11:36:52 by habu-zua          #+#    #+#              #
#    Updated: 2023/08/16 10:26:45 by habu-zua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c\
			ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c\
			ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c

SRCSB =	ft_lstnew.c	ft_lstadd_front.c ft_lstsize.c ft_lstlast.c	ft_lstmap.c\
		ft_lstadd_back.c ft_lstclear.c	ft_lstdelone.c ft_lstiter.c

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

%.o : %.c libft.h
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)	

bonus: $(OBJSB)
	ar rcs $(NAME) $(OBJSB)

clean:
	rm -rf $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re