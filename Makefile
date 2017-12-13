# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 15:23:16 by szaghban          #+#    #+#              #
#    Updated: 2017/12/13 22:52:05 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SNAME := libft.so
SRC := srcs/
INCLUDES := includes/
FUNS := ft_bzero ft_memcpy ft_memmove ft_memset ft_memccpy ft_memchr \
		ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat \
		ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr \
		ft_strcmp ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii \
		ft_toupper ft_tolower ft_isprint ft_strncmp
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
