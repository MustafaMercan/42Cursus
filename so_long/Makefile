NAME = so_long
OBJ = $(shell find ./ -name "*.o")
ARC = $(shell find ./ -name "*.a")
CFILES = $(shell find ./ -name "*.c")
CC = gcc
FLAGS = -Wall -Wextra -Werror -framework OpenGL -framework AppKit -L./minilibx -lmlx -g
#all kısmına başka kütüphaneler eklediğinde make -C komutu ile orada da make işlemini gerçekleştir.
#make işlemi ekledikten sonra all: kısmında 2.satıra konumdaki .a uzantılı dosyaları da ekle
all:
	make -C ./minilibx
	$(CC) ./src/*.c $(FLAGS) -o $(NAME)
clean:
	@rm -fr $(OBJ)
fclean: clean
	@rm -fr $(NAME) $(ARC)
re: fclean all

.PHONY: all clean fclean re