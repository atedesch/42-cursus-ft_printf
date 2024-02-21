# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 21:51:56 by atedesch          #+#    #+#              #
#    Updated: 2024/02/21 12:29:45 by atedesch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

library			= libftprintf

prefix			= ft_

mandatory		= putchar \
					putstr \
					itoa \
					printf

SRCS			= $(mandatory:%=$(prefix)%.c)

OBJS			= $(SRCS:.c=.o)

HEADER			= ft_printf.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
INCLUDES		= ./
RN				= ar rcs
LB				= ranlib
COMP			= -c

OUTN 			= $(library).a

NAME			= $(OUTN)

$(NAME):	$(SRCS) $(HEADER)
	$(CC) $(CFLAGS) $(COMP) -g -I$(INCLUDES) $(SRCS)
	$(RN) $(NAME) $(OBJS)
	$(LB) $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re