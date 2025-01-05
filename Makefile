CC = gcc
CFLAGS = -Wall -Wextra -g

SRC = src/main.c src/antenna.c src/mesh.c src/solver.c src/utils.c
OBJ = $(SRC:.c=.o)

TARGET = AntennaSimulator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
