OBJ := obj

SOURCES := $(wildcard ./*.c)
OBJECTS := $(patsubst ./%.c, $(OBJ)/%.o, $(SOURCES))

main: $(OBJECTS)
	$(CC) $^ -o $@ -lm
	chmod +x ./main

$(OBJ)/%.o: ./%.c
	mkdir obj -p
	$(CC) -c $^ -o $@