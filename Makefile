# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g -I./include
SRC = src/main.c src/antenna.c src/mesh.c src/solver.c src/utils.c
OBJ = $(SRC:.c=.o)
TARGET = AntennaSimulator

# Règle par défaut
all: $(TARGET)

# Compilation de l'exécutable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers générés
clean:
	rm -f $(OBJ) $(TARGET)

# Pour forcer une recompilation complète
.PHONY: all clean