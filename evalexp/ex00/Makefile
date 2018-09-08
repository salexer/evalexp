# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 18:43:38 by btion-fr          #+#    #+#              #
#    Updated: 2018/09/08 19:20:53 by btion-fr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= eval_expr

C_FILES		= main.c tools.c

FLAGS		= -Wall -Wextra -Werror

$(NAME):
			gcc -o $(NAME)  $(C_FILES)

all:		$(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
