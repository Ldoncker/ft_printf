# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 18:51:11 by ldoncker          #+#    #+#              #
#    Updated: 2020/11/29 15:47:09 by ldoncker         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
HEAD = ft_printf.h

SRC =	ft_printf.c \
		print_c_s.c \
		print_p.c \
		print_d.c \
		print_u.c \
		print_x.c \
		print_perc.c \
		write.c \
		utils.c \
		manage_flags.c \
		read_translate.c

%.o: %.c $(HEAD)
	gcc $(FLAGS) -c $< -o $@

OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	@$(MAKE) all -C ./libft
	@$(MAKE) bonus -C ./libft
	@cp ./libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo LIBNAME: $(NAME) has been created with object-file index

all: $(NAME)

clean:
	@$(MAKE) clean -C ./libft
	/bin/rm -f $(OBJ)

fclean:
	@$(MAKE) fclean -C ./libft
	/bin/rm -f $(OBJ) $(NAME)

re: clean all
	@echo RE: fclean and make all completed

bonus:
	$(MAKE) all

.PHONY: all clean fclean re bonus
