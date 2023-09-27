# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 12:04:14 by ade-beco          #+#    #+#              #
#    Updated: 2023/09/27 12:40:11 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS		=	$(SRCS:.c=.o)

CC 			=	cc

LIBC		=	ar rc

FLAGS		=	-Wall -Wextra -Werror

INCL		=	-I ./includes

all:		$(OBJS) $(NAME)

%.o:		%.c
				@echo $(CC) $(FLAGS) -c $(INCL) $< -o $(<:.c=.o)
				@$(CC) $(FLAGS) -c $(INCL) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
				@echo $(LIBC) $(NAME) $(OBJS)
				@$(LIBC) $(NAME) $(OBJS)
clean:
				@echo rm -f $(OBJS) $(BONUS_OBJS)
				@rm -f $(OBJS) $(BONUS_OBJS)
fclean:		clean
				@echo rm -f $(NAME)
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re