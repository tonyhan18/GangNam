CC = gcc
FLAGS = -Wall -Wextra -Werror
BUFFER_SIZE = 42

TARGET = main
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)


.c.o:
	$(CC) $(FLAGS) -c -o $@ $<

$(TARGET):$(OBJ)
	$(CC) $(FLAGS) -o $@ $^

all : $(TARGET)