# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 21:51:56 by atedesch          #+#    #+#              #
#    Updated: 2024/02/21 19:17:46 by atedesch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

library			= libftprintf

prefix			= ft_

mandatory_ft	= itoa \
					putchar \
					putstr \
					putnbr \
					printf \

SRCS			= $(mandatory_ft:%=$(prefix)%.c)

OBJS			= $(SRCS:.c=.o)

HEADER			= ft_printf.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
INCLUDES		= ./
RN				= ar rcs
LB				= ranlib

OUTN 			= $(library).a

NAME			= $(OUTN)

$(NAME):	$(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -c -g -I$(INCLUDES) $(SRCS)
	$(RN) $(NAME) $(OBJS)
	$(LB) $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

main: $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -g -I$(INCLUDES) $(SRCS) ft_test_main.c

.PHONY:	all clean fclean re main