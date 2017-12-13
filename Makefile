# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 15:23:16 by szaghban          #+#    #+#              #
#    Updated: 2017/12/13 18:22:32 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SNAME := libft.so
SRC := srcs/
INCLUDES := includes/
FUNS := ft_bzero ft_memcpy ft_memmove ft_memset ft_memccpy ft_memchr \
		ft_memcmp
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re so norme

all: $(NAME)

$(BINS):
	@gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	@ar rc $(NAME) $(BINS)

so: fclean $(BINS)
	@gcc -shared -o $(SNAME) *.o

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME) $(SNAME)

re: fclean all

norme: fclean
	@norminette $(INCLUDES)/*.h $(SRC)/*.c
