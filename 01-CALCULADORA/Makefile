# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 10:28:49 by tales             #+#    #+#              #
#    Updated: 2025/06/09 10:34:36 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executável
NAME = calculadora

# Diretórios
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = .

# Fontes e objetos
SRC = main.c \
      $(SRC_DIR)/menu.c \
      $(SRC_DIR)/somar.c \
      $(SRC_DIR)/subtrair.c \
      $(SRC_DIR)/multi.c \
      $(SRC_DIR)/divi.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

# Compilador
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

# Regra principal
all: $(NAME)

# Linka os objetos e cria o binário
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regra para compilar os .c em .o dentro de obj/
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)  # <-- Cria diretório do .o se necessário
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos objetos
clean:
	rm -rf $(OBJ_DIR)

# Limpeza geral
fclean: clean
	rm -f $(NAME)

# Recompilação total
re: fclean all

.PHONY: all clean fclean re
