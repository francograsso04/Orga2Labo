# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Nombre de los ejecutables
EXECUTABLES = $(patsubst $(OBJ_DIR)/%.o, $(BIN_DIR)/%, $(OBJS))

# Regla principal
all: $(EXECUTABLES)

# Compilar cada archivo objeto y generar ejecutables
$(BIN_DIR)/%: $(OBJ_DIR)/%.o | $(BIN_DIR)
	$(CC) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Crear directorios si no existen
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Limpiar archivos generados
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean