# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alienard <alienard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 18:51:33 by alienard          #+#    #+#              #
#    Updated: 2019/12/03 19:40:40 by alienard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a

SRCS =		ft_printf.c \
			ft_padding.c \
			ft_preci.c \
			ft_conv.c \
			ft_conv_2.c \
			ft_putnbr_base.c \
			ft_len_hexa.c

OBJS = 		$(SRCS:.c=.o)

CC =		gcc

RM = 		rm -f

AR = 		ar rc

HEADER = 	./

CFLAGS =	-Wall -Wextra -Werror

LIBFT_MAKE = 	$(MAKE) -C $(LIBPATH)

LIBPATH =	./libft/

.c.o:		$(SRCS)
			$(CC) $(CFLAGS) -c $< -I $(HEADER) -o $(<:.c=.o)

all:		libft/libft.a $(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS) $(LIBPATH)*.o

libmake:
			$(LIBFT_MAKE)

libft/libft.a:		
		make -C $(LIBPATH)


$(LIB):
		make -C libft re

clean:
			$(RM) $(OBJS)
			$(LIBFT_MAKE) fclean

fclean:		clean
			$(RM) $(NAME)
			$(LIBFT_MAKE) fclean

re:			fclean all

.PHONY:		re all clean fclean
