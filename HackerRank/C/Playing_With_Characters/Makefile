CC = gcc
TARGET = Playing_With_Characters.out
OBJS = Playing_With_Characters.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Playing_With_Characters.o : Playing_With_Characters.c
	$(CC) -c -o Playing_With_Characters.o Playing_With_Characters.c

clean :
	rm $(OBJS)
	rm $(TARGET)
