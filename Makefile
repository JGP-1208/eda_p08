# Complator
CC = gcc

# Bandera de complilacion
CFLAGS = -Wall  -Wextra -Iinclude

# Archivos a complirar
SRC = src/*.c main.c

# Nombre del ejecutable
TARGET = lista_ligada

#Regla principal para compilar
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

#Regla para ejecutar
run: all
	./$(TARGET)

#Regla para borrar los archivos generados al compilar
clean:
	rm -f $(TARGET)