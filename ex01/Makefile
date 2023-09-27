# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 12:04:14 by ade-beco          #+#    #+#              #
#    Updated: 2023/09/27 12:36:31 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS		=	$(SRCS:.c=.o)

CC 			=	cc

LIBC		=	ar rc

LIBR		=	ranlib

FLAGS		=	-Wall -Wextra -Werror

INCL		=	-I ./includes

all:		$(OBJS) $(NAME)

%.o:		%.c
				@echo "Compiling $< ..."
				@$(CC) $(FLAGS) -c $(INCL) $< -o $(<:.c=.o)
				@echo "Compiling Finish !"

$(NAME):	$(OBJS)
				@echo "Creating executable $@"
				@$(LIBC) $(NAME) $(OBJS)
				@$(LIBR) $(NAME)
				@echo "Executable created !"
clean:
				@echo "Cleaning..."
				@rm -f $(OBJS) $(BONUS_OBJS)
				@echo "Cleaned up !"
fclean:		clean
				@echo "Cleaning...."
				@rm -f $(NAME)
				@echo "Cleaned up !"

re:			fclean all

.PHONY:		all clean fclean re