CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = main
SRC = $(wildcard *.c)
OBJ = $(SRC.c=.o)

all: $(TARGET) clean

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJ)

fcelan: clean
	rm -f $(TARGET)

re : fcelan all