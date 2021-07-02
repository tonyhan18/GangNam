CC = gcc
CFLAGS = -Wall -Werror -Wextra

TARGET = main
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)
	rm -rf $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJECTS)
